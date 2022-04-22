
digrams_hashtable = {}
number_of_rules = 0
call_signature_table = {}
id_signature_table = {}
cst_num = 1
rules_list = []
main_rule = None

comm_map = {}   # {comm_id: {color: {rank: val}, key: {rank: val}}} 只有在comm_split才会记录

truncateDict = {}
redirect = {}
bucket = {}
requestDict = {}
performanceDict = {}
computeDict = {}
compute_cnt = 0
