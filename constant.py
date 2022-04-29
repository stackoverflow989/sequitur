'''
    假定所有trace file的名称是${rank}.trace_*
'''
TWO_EVENTS_TRACE_SUFFIX = ".trace_2"
FOUR_EVENTS_TRACE_SUFFIX = ".trace_4"
TRACE_SUFFIX = ".trace"

THRESHOLD = 0.05
CYC_THRESHOLD = 0.07
SIMILARITY = 0.3
CYC_SIMILARITY = 1.5
ABSOLUTE_DELTA = 10000
PERFORMANCE_DIM = 6

TWO_COMM_LIST = ['MPI_Comm_split', 'MPI_Comm_dup']

USE_REQUEST_LIST = [
    'MPI_Isend',
    'MPI_Irecv',
    'MPI_Ibcast',
    'MPI_Ireduce'
]

FREE_REQUEST_LIST = [
    'MPI_Wait',
    'MPI_Waitall',
    'MPI_Waitsome',
    'MPI_Waitany'
]
