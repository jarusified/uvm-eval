# Navigation
## benchmarksv3
    - Contains all benchmarks in paper and some additional examples
    - "bsize-scripts" contains scripts for generating batch-oriented data.
    - "fault-scripts" contains scripts for generating fault-based data.
## drivers
    - `batchd` includes batch-based modifications
    - `faults` includes fault-based data
## tools
    - `syslogger` contains the tool for parsing data out of the system log
    - `plotv2` contains .sh scripts that operate the .py scripts for reproducing plots and analysis from the paper if data is available

# Overview
Data in the paper is collected through driver modifications. There are two types of data presented: batch, and fault (access pattern).
We provided two drivers to collect these data separately due to the overhead of fault data collection. The 
instructions for swapping the driver out, building and running applications, system specifications, and
other information are below.

## Swapping the driver
To enable logging information, the driver with added logging features must be installed. Additionally, it may
need certain parameters to function correctly. This requires root permission in most cases.\
There are two drivers provided. One collects produces "batch" experiment data from the paper, and the other produces
"fault" experiment data from the paper (access patterns). These drivers are at:

../drivers/batchd-NVIDIA-Linux-x86\_64-460.74.27.04/kernel/

and

../drivers/faults-NVIDIA-Linux-x86\_64-460.74.27.04/kernel/

respectively.

Notes: The following assumes that the appropriate NVIDIA driver is already installed. These steps will replace the 
existing UVM driver for convenience over reboot and multiple experiments. The base UVM driver will need to 
be reinstalled to revert to the original system status. Full system specifications are at the end of this file.

### Build
cd drivers/*-NVIDIA-Linux-x86_64-460.74.27.04/kernel/\
make modules\
sudo make modules_install

### Load
sudo rmmod nvidia_uvm\
sudo modprobe nvidia_uvm\
Note: turn on/off prefetching with 1/0 and/or maximum batch size using arguments as below:\
sudo modprobe nvidia-uvm uvm_perf_prefetch_enable={1,0}\
sudo modprobe nvidia-uvm uvm_perf_fault_batch_count=${batch_size}

## Applications
The scripts will reproduce the experiments as they were performed for use in the paper, including data not used or omitted for space.\
We will document them in detail here:

### sgemm
benchmarks/cublas\
description: sgemm from CUBLAS libary.\
build: make\
run: ./matrixMul2 -wA=${psize} -hA=${psize} -wB=${psize} -hB=${psize}\
data sets: programmatically generated - 4096, 8192, 12288, 16384, 20480, 24576, 28672, 32768

### stream
benchmarks/stream\
description: stream triad from BabelStream\
build: make\
run: ./cuda-stream -n 1 -s $psize --triad-only\
data sets: programmatically generated - 125000704, 250001408, 375002112, 500002816, 625003520, 750004224

### regular access pattern
benchmarks/linear\
description: accesses pages as sequentially as possible, with full data coalescing\
build: make DEFS=-DPNUM=$psize\
run: ./page\
data sets: programmatically generated - 1048576, 8388608

### random access pattern
benchmarks/random\
description: accesses each page randomly, uniquely, with the same data set as linear/regular\
build: make DEFS=-DPNUM=$psize\
run: ./page\
data sets: programmatically generated - 1048576, 8388608

### hpgmg
benchmarks/hpgmg\
description: NVIDIA UVM hpgmg - https://bitbucket.org/nsakharnykh/hpgmg-cuda/src/master/ \
build: ./build.sh (complex options for ./configure, make)\
run: ./build/bin/hpgmg-fv [log2_box_dim]  [target_boxes_per_rank]\
data sets: programmatically generated - "7 7", "8 8"

### cufft
benchmarks/cufft\
description: cufft example - https://github.com/NVIDIA/cuda-samples/tree/master/Samples/simpleCUFFT \
build: make\
run: ./simpleCUFFT\
data sets: programmatically generated - 80000000

### tealeaf
benchmarks/tealeaf\
description: tealeaf - https://github.com/UoB-HPC/TeaLeaf/tree/master/2d \
build: make\
run: ./tealeaf\
data sets: "tea.in" is default input file - "smaller-tea.in", "smaller-tea.in", "large-tea.in" used for experiments by overwriting tea.in

### abc
benchmarks/abc\
description: one block matrix add experiment\
build: make DEFS="-DTSIZE=$psize -DBSIZE=$psize"\
run: ./abc\
data sets: programatically generated - 32, 64, 128, 256

## Tools
Several tools are used to assist with data collection, as all data is logged to the system logger. dmesg is too slow in the event of page fault collection

### Syslogger
Move data from system log to file while application is running:\
tools/syslogger/log "$logfile"&\
pid=$!\
<path>/app\
kill $pid

### log2csv
Process syslogger output into CSV:\
tools/sys2csv/log2csv.sh $logfile

## Data and Formatting
Check benchmarks/bsize-scripts and benchmarks/faults-scripts (batchd- driver and faults- driver respectively) 
for data layout, formatting as well as instructions for generating data from the paper.

## Plotting
Plots can be generated by files in the tools/plotv2 directory; refer to in-directory readme

## Experimental System Specs
Relevant hardware details: Titan V GPU, MD Epyc 7551P 32-Core CPU, 128GB DDR4\
Operating systems and versions: Fedora 33 running 5.9.16-200.fc33.x86\_64, CUDA 11.2, and NVIDIA Driver version 460.27.04\
Compilers and versions: GCC 10.2.1 and NVCC cuda\_11.2.r11.2/compiler.29373293\_0\
Libraries and versions: CUBLAS 11.2\
Additional system details can be found in AuthorKit.txt\
Note: The provided UVM drivers require the compatible NVIDIA Driver on the system: 460.74.27.04

