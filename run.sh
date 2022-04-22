TARGET=$1
CLASS=$2
NPROCS=$3
NPB_PATH=~/common/NPB3.3.1/NPB3.3-MPI/
SEQUITUR_PATH=~/src/performance/sequitur/

TARGET_LOW=${TARGET,,}
TARGET_NAME="${TARGET_LOW}.${CLASS}.${NPROCS}"
DIRNAME="${TARGET}_${CLASS}_${NPROCS}"

cd ${SEQUITUR_PATH}/${DIRNAME}
mkdir benchmark
cp ../CG_D_16/makefile ./
cp /data1/xuqingguo/block.c ./
cp /data1/xuqingguo/block.h ./
make
export LD_PRELOAD=/home/xuqingguo/common/mpiP-papi/lib/libmpiP.so
export PAPI_MON_EVENTS=PAPI_LST_INS:PAPI_L1_DCM
mpirun -np ${NPROCS} ./code
rename .trace .trace_2 *.trace

export PAPI_MON_EVENTS=PAPI_TOT_INS:PAPI_TOT_CYC:PAPI_BR_CN:PAPI_BR_MSP
mpirun -np ${NPROCS} ./code
rename .trace .trace_4 *.trace

cd ${SEQUITUR_PATH}
mpiexec -np ${NPROCS} python splice.py -t ${SEQUITUR_PATH}/${DIRNAME}/ -o 
