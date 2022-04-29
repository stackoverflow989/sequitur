#/bin/zsh
TARGET=$1
CLASS=$2
NPROCS=$3
NPB_PATH=~/common/NPB3.3.1/NPB3.3-MPI/
SEQUITUR_PATH=~/src/performance/sequitur/

TARGET_LOW=${TARGET,,}
TARGET_NAME="${TARGET_LOW}.${CLASS}.${NPROCS}"
DIRNAME="${TARGET}_${CLASS}_${NPROCS}"

cd ${NPB_PATH}
make ${TARGET} CLASS=${CLASS} NPROCS=${NPROCS}
cd ${NPB_PATH}/bin
rm -rf ${DIRNAME} && mkdir ${DIRNAME}
cd ${NPB_PATH}/bin/${DIRNAME}
cp ../${TARGET_NAME} ./

export LD_PRELOAD=/home/xuqingguo/common/mpiP-papi/lib/libmpiP.so
export PAPI_MON_EVENTS=PAPI_LST_INS:PAPI_L1_DCM
mpirun -np ${NPROCS} ${TARGET_NAME}
rename .trace .trace_2 *.trace

export PAPI_MON_EVENTS=PAPI_TOT_INS:PAPI_TOT_CYC:PAPI_BR_CN:PAPI_BR_MSP
mpirun -np ${NPROCS} ${TARGET_NAME}
rename .trace .trace_4 *.trace

cd ${SEQUITUR_PATH}
#rm -rf ${DIRNAME} && mkdir ${DIRNAME}
#mkdir ${SEQUITUR_PATH}/${DIRNAME}/trace

conda activate performance

export LD_PRELOAD=
mpiexec -np ${NPROCS} python splice.py -t ${NPB_PATH}/bin/${DIRNAME}/ -o ${SEQUITUR_PATH}/${DIRNAME}/trace/
mpiexec -np ${NPROCS} python main.py -t ${SEQUITUR_PATH}/${DIRNAME}/trace/ -o ${SEQUITUR_PATH}/${DIRNAME}/

# cp ./block.c ${SEQUITUR_PATH}/${DIRNAME}/
# cp ./block.h ${SEQUITUR_PATH}/${DIRNAME}/
# cp ./MG_C_16/makefile ${SEQUITUR_PATH}/${DIRNAME}/

# cd ${SEQUITUR_PATH}/${DIRNAME}/
# make
# export LD_PRELOAD=/home/xuqingguo/common/mpiP-papi/lib/libmpiP.so
# export PAPI_MON_EVENTS=PAPI_LST_INS:PAPI_L1_DCM
# mpirun -np ${NPROCS} ./code
# rename .trace .trace_2 *.trace
# export PAPI_MON_EVENTS=PAPI_TOT_INS:PAPI_TOT_CYC:PAPI_BR_CN:PAPI_BR_MSP
# mpirun -np ${NPROCS} ./code
# rename .trace .trace_4 *.trace
# mkdir benchmark

# export LD_PRELOAD=
# cd ${SEQUITUR_PATH}
# mpiexec -np ${NPROCS} python splice.py -t ${SEQUITUR_PATH}/${DIRNAME}/ -o ${SEQUITUR_PATH}/${DIRNAME}/benchmark/
