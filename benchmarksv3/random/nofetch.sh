#!/bin/bash

sudo nvidia-smi -lgc 1912 -i 0,1,2,3

export OMP_NUM_THREADS=32
export OMP_PLACES=cores
export OMP_PROC_BIND=spread
export CUDA_VISIBLE_DEVICES=0
mem=1

sudo rmmod nvidia-uvm
sudo modprobe nvidia-uvm uvm_perf_prefetch_enable=0 # uvm_perf_fault_coalesce=1 #uvm_perf_fault_batch_count=1

out="quant-nofetch.csv"
rm -f $out
touch $out

UVM="--unified-memory-profiling off"

echo "starting dev $CUDA_VISIBLE_DEVICES node $mem mem $mem"
for ((i=2**0; $i < 2**24; i=$i * 2)) do ## should be 0-20 12 - 33
    make clean
    make DEFS=-DPNUM=$i
    echo "size,$i" >> $out
    ./page | grep "alloced,\|perf," >> $out
    sudo rmmod nvidia-uvm
    sudo modprobe nvidia-uvm uvm_perf_prefetch_enable=0 # uvm_perf_fault_coalesce=1 #uvm_perf_fault_batch_count=1
done


sudo rmmod nvidia-uvm
sudo modprobe nvidia-uvm #uvm_perf_prefetch_enable=1 uvm_perf_fault_coalesce=1 #uvm_perf_fault_batch_count=1
