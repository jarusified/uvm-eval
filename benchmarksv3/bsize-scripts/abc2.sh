#!/bin/bash -ex
#SBATCH -N 1
#SBATCH -w voltron
#SBATCH -J abc-faults2-quant
#SBATCH --exclusive
#SBATCH -t 48:00:00
#SBATCH -o %x.%j.out

ITERS=1


sudo modprobe nvidia-uvm #uvm_perf_prefetch_enable=0 #uvm_perf_fault_coalesce=0 #uvm_perf_fault_batch_count=1
sudo rmmod -f nvidia-uvm
sudo modprobe nvidia-uvm uvm_perf_prefetch_enable=0 #uvm_perf_fault_coalesce=0 #uvm_perf_fault_batch_count=1

cd ../../tools/syslogger/
make
cd -

bsizes=(32 64 128 256 512 1024 2048 4096 6144)

psizes=()
if [ $# -gt 0 ]; then
    for ((i=1; i<$#+1;i++));do
        psizes+=(${!i})
    done
else
    #psizes=( 256 )
    psizes=(32 64 128 256)
fi

cd ../abc


rm -f quant2*.csv
find . -maxdepth 1  -name 'log2_*' -type d -exec rm -rf {} +

cd /home/tnallen/cuda11.2/faults-cache-NVIDIA-Linux-x86_64-460.27.04/kernel
    
make -j
sudo make modules_install
cd -
# prefetching on or off
#for ((pf=0; pf < 1; pf++)); do
for ((pf=0; pf < 2; pf++)); do
    # iter batch sizes
    for ((k=0; k<${#bsizes[@]}; k++)); do
        bsize=${bsizes[$k]}
        # iter problem size
        for ((i=0;i<${#psizes[@]}; i++)); do
            psize=${psizes[$i]}

            make clean
            make DEFS="-DTSIZE=$psize -DBSIZE=$psize"

            if [ $pf -eq 1 ]; then
                logdir="log2_pf_${psize}_bsize_${bsizes[$k]}"
            else 
                logdir="log2_${psize}_bsize_${bsizes[$k]}"
            fi
            mkdir -p $logdir

            # if want more than one sample per problem size
            for ((j=0;j<$ITERS;j++)); do
                sudo dmesg -C
                sudo rmmod -f nvidia-uvm
                sudo modprobe nvidia-uvm uvm_perf_prefetch_enable=${pf} uvm_perf_fault_batch_count=${bsizes[$k]}   #uvm_perf_fault_coalesce=0 #uvm_perf_fault_batch_count=1

                if [ $pf -eq 1 ]; then

                    out="quant2-pf-${bsize}.csv"
                else
                    out="quant2-${bsize}.csv"
                fi
                echo "size,$psize" >> $out 

                file=abc_$j
                logfile=/scratch1/$file
                pwd

                ../../tools/syslogger/log "$logfile" &
                pid=$!
                sleep 8

                echo "pid: $pid"
                time ./abc #| grep "alloced,\|perf," >> $out
                #time ./abc | grep "alloced,\|perf," >> $out

                len=`cat "$logfile" | wc -l`
                sleep 5
                until [ $(expr $(cat "$logfile" | wc -l)  - ${len}) -eq 0 ]; do
                    len=`cat "$logfile" | wc -l`
                    sleep 3
                done
                sleep 1
                kill $pid
                mv $logfile $logdir/
                ../../tools/sys2csv/log2csv.sh $logdir/$file
                dmesg > $logdir/dmesg_$i

            done
        done
    done
done

cd -




sudo rmmod nvidia-uvm
sudo modprobe nvidia-uvm #uvm_perf_prefetch_enable=0 uvm_perf_fault_coalesce=0 #uvm_perf_fault_batch_count=1
