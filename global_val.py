
digrams_hashtable = {}
number_of_rules = 0
call_signature_table = {}
id_signature_table = {}
cst_num = 1
rules_list = []
main_rule = None

comm_map = {}   # {comm_id: {color: {rank: val}, key: {rank: val}, parent: comm_id}} 只有在comm_split才会记录
comm_cnt = 1    # 一定有一个MPI_COMM_WORLD

truncateDict = {}
redirect = {}
bucket = {}
requestDict = {}
requestUsed = []
requestUsedMap = {}
performanceDict = {}
computeDict = {}
compute_cnt = 0
