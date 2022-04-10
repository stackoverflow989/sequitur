

from locale import T_FMT_AMPM
from with_compute import *
from mpi4py import MPI
import global_val


def create_signature_from_event(mpi_event: str):
    events = mpi_event.split(',')
    key = ''
    # 对于MPI通信事件，丢弃最后两位时间数据，把其他的部分作为key值
    if ' MPI_Compute' not in mpi_event:
        for i in range(3):
            key += events[i]
            key += ';'
        key +=  events[5]
        if key not in global_val.call_signature_table:
            global_val.call_signature_table[key] = global_val.cst_num
            global_val.cst_num += 1
        return global_val.call_signature_table[key]
    else:
        line = mpi_event.strip()
        s = line.split(',')[2]
        s = s.split(';')[:6]
        values = [int(val) for val in s]
        afterHandle = dataHandler(values)
        index_1 = global_val.truncateDict[afterHandle]
        index_2 = global_val.redirect[index_1]
        key = index_2
        if key not in global_val.call_signature_table:
            global_val.call_signature_table[key] = global_val.cst_num
            global_val.computeDict[global_val.cst_num]=global_val.compute_cnt
            global_val.compute_cnt += 1
            global_val.cst_num += 1
        return global_val.call_signature_table[key]


# 表示一个规则，guard作为哨兵
class Rule:
    def __init__(self, rule_num):
        self.id = rule_num
        self.guard = Guard(self)
        self.count = 0
        self.index = 0

    def first(self):
        return self.guard.next

    def last(self):
        return self.guard.prev


# 用于合并左右两个symbol，删除左边symbol可能拥有的digram
def join(left, right):
    if left.next is not None:
        left.delete_digram()
    left.next = right
    right.prev = left


# 符号基类，定义了基本的方法
class Symbol:
    def __init__(self):
        self.id = 0
        self.exp = 1
        self.rule = None
        self.prev = None
        self.next = None

    def is_guard(self):
        return False

    def is_non_terminal(self):
        return False

    # 查找当前symbol构建的key是否在表中，如果不为当前symbol构建的，那么就发现了重复项，查找不到返回None
    def get_digram(self):
        if self.next is not None:
            index = str(self.id) + '^' + str(self.exp) + '&' + str(self.next.id) + '^' + str(self.next.exp)
            if index in global_val.digrams_hashtable:
                return global_val.digrams_hashtable[index]
            else:
                return None

    # 仅当从digram中查找到的key值对应的表项与当前symbol相等时，才会去删除这一项
    def delete_digram(self):
        if self.next is not None:
            if self.is_guard() or self.next.is_guard():
                return
            index = str(self.id) + '^' + str(self.exp) + '&' + str(self.next.id) + '^' + str(self.next.exp)
            if index in global_val.digrams_hashtable:
                if global_val.digrams_hashtable[index] == self:
                    del global_val.digrams_hashtable[index]

    # 如果表中没有这一项，就构建key值并将symbol插入到哈希表
    def put_digram(self):
        if self.next is not None:
            index = str(self.id) + '^' + str(self.exp) + '&' + str(self.next.id) + '^' + str(self.next.exp)
            if index not in global_val.digrams_hashtable:
                global_val.digrams_hashtable[index] = self

    # 连接 this = symbol 与 symbol = this.next，删除this与this.next构建的digram
    def insert_after(self, symbol):
        join(symbol, self.next)
        join(self, symbol)

    # 将一个digram用非终结符替代
    def substitute(self, rule):
        prev = self.prev
        self.clean_up()
        self.next.clean_up()
        # del prev.next
        # del prev.next
        prev.insert_after(NonTerminal(rule, 1))
        if not prev.check():
            prev.next.check()

    # 如果遇到即将插入digram table的项已存在于哈希表的处理方法
    def process_match(self, match):
        # checked = self.get_digram()

        if (match.prev.is_guard() and match.next.next.is_guard()):
            rule = match.prev.rule
            self.substitute(rule)
        else:
            
            rule = Rule(-global_val.number_of_rules)
            global_val.number_of_rules += 1
            if self.is_non_terminal():
                rule.last().insert_after(NonTerminal(self.rule, self.exp))
            else:
                rule.last().insert_after(Terminal(self.id, self.exp))

            if self.next.is_non_terminal():
                rule.last().insert_after(NonTerminal(self.next.rule, self.next.exp))
            else:
                rule.last().insert_after(Terminal(self.next.id, self.next.exp))

            match.substitute(rule)
            self.substitute(rule)
            rule.first().put_digram()
           
        # 如果新创建的规则的第一个symbol是非终结符，那么该非终结符对应的规则可能被替代
        if rule.first().is_non_terminal() and rule.first().rule.count == 1:
            rule.first().expand()

    def clean_up(self):
        pass

    # 对于新插入的元素，检查其是否符合几项规则
    def check(self):
        if self.is_guard() or self.next.is_guard():
            return False

        # 应用twins-removal规则
        if self.id == self.next.id:
            self.prev.delete_digram()
            self.exp += self.next.exp
            self.next.clean_up()
            return self.prev.check()

        checked = self.get_digram()

        if checked is None:
            self.put_digram()
            return False

        # twins规则中，发现重叠，应当返回0
        if checked.next is self:
            return False
        else:
            self.process_match(checked)
            return True

    def expand(self):
        pass


# 非终结符
class NonTerminal(Symbol):
    def __init__(self, rule, exp):
        super().__init__()
        self.rule = rule
        self.exp = exp
        self.rule.count += 1
        self.id = self.rule.id

    def clean_up(self):
        join(self.prev, self.next)
        self.delete_digram()
        self.rule.count -= 1

    def is_non_terminal(self):
        return True

    # 对于只出现一次的规则，将其替换掉对应非终结符
    def expand(self):
        left = self.prev
        right = self.next
        first = self.rule.first()
        last = self.rule.last()

        join(left, first)
        join(last, right)
        last.put_digram()

        self.rule.guard.rule = None
        self.rule.guard = None


# 终结符
class Terminal(Symbol):
    def __init__(self, sym_num, exp):
        super().__init__()
        self.id = sym_num
        self.exp = exp

    def clean_up(self):
        join(self.prev, self.next)
        self.delete_digram()


# 哨兵
class Guard(Symbol):
    def __init__(self, rule):
        super().__init__()
        self.rule = rule
        self.prev = self
        self.next = self

    def clean_up(self):
        join(self.prev, self.next)

    def is_guard(self):
        return True

    def check(self):
        return False


def append_terminal(sym):
    # print(str(sym) + ' has already got')
    (global_val.main_rule.last()).insert_after(Terminal(sym, 1))
    global_val.main_rule.last().prev.check()


def print_rules():
    with open('result.txt', 'w') as out:
        global_val.rules_list = [global_val.main_rule]
        length = 1
        j = 0
        while j < length:
            temp = str(-j) + '->'
            ptr = global_val.rules_list[j].first()
            while True:
                if ptr.is_guard():
                    break
                if ptr.is_non_terminal():
                    if length > ptr.rule.index and global_val.rules_list[ptr.rule.index] == ptr.rule:
                        i = ptr.rule.index
                    else:
                        i = length
                        ptr.rule.index = length
                        global_val.rules_list.append(ptr.rule)
                        length += 1
                    temp += str(-ptr.rule.index) + '^' + str(ptr.exp) + ' '
                else:
                    temp += str(ptr.id) + '^' + str(ptr.exp) + ' '
                ptr = ptr.next
            j += 1
            # print(temp)
            out.write(temp + '\n')


def sequitur(filename):
    with open(filename, 'r') as file_in:
        count = 0
        for line in file_in:
            # if ' MPI_Compute' not in line:
                # number = int(line)
                # if count == 3355:
                #     print('here')
            number = create_signature_from_event(line)
            append_terminal(number)
        print_rules()
    # print('end')


# def getArgs():
#     parser = argparse.ArgumentParser()
#     parser.add_argument('--tracepath',  action='store_true', dest='pathPrefix', default='/home/xuqingguo/src/performance/mpi_splice/', help='trace file path prefix')
#     parser.add_argument('--nprocs', '-n', action='store_true', dest='nprocs', default=16, help='process number')
#     parser.add_argument('--output', '-o', action='store_true', dest='output', default='code.c', help='output Filename')
#     args = parser.parse_args() 
#     return args


# rules_hash = {}
# comm = MPI.COMM_WORLD
# rank = comm.Get_rank()
# args = getArgs()
# nprocs = args.nprocs
# output_filename = args.output
# pathPrefix = args.pathPrefix
# trace_name = pathPrefix+str(rank)+'.trace'



def process_grammar(trace_name):
    # print(global_val.requestDict)
    global_val.main_rule = Rule(-global_val.number_of_rules)
    global_val.number_of_rules += 1
    
    sequitur(trace_name)
    # rule_all_gather(comm, nprocs)
