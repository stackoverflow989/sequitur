
# one_cfg = [
#     '11&0->1^1 2^1 3^1 15^1 5^1 6^1 7^1 8^1 9^1 67^1 11&-1^1 10^1 8^1 11^1 68^1 11&-1^1 12^1 8^1 '
#     '12^1 69^1 11&-1^1 13^1 8^1 14^1 70^1 116^1 17^1 11&-2^3 116^1 72^1 19^1 17^1 20^1 91^1 19^1 '
#     '92^1 11&-3^1 24^1 11&-4^1 11&-5^1 74^1 27^1 47^1 117^1 11&-5^1 11&-6^1 30^1 11&-7^1 33^1 11&-7^1 '
#     '11&-8^1 11&-6^2 11&-5^5 8^1 11&-3^1 11&-5^3 8^1 116^1 11&-9^1 17^1 42^1 6^1 11&-10^1 17^1 11&-10^1 '
#     '11&-11^1 42^1 11&-11^1 43^1 11&-5^1 6^1 45^1 11&-12^2 59^1 25^1 113^1 27^1 15^1 11&-13^1 11&-14^1 '
#     '11&-15^1 11&-16^4 11&-17^12 11&-16^46 11&-18^1 11&-19^1 11&-20^1 81^1 11&-1^1 25^1 11&-8^1 17^1 ',
#     '11&-1->5^1 8^1 ',
#     '11&-2->116^1 8^1 ',
#     '11&-3->11&-21^5 23^1 ',
#     '11&-4->25^1 11&-9^1 ',
#     '11&-5->8^1 25^1 ',
#     '11&-6->17^1 25^1 ',
#     '11&-7->31^1 32^1 19^1 ',
#     '11&-8->76^1 25^1 ',
#     '11&-9->6^1 25^1 ',
#     '11&-10->11&-22^1 11&-23^1 42^1 ',
#     '11&-11->8^1 11&-22^1 ',
#     '11&-12->59^1 11&-13^1 11&-24^1 ',
#     '11&-13->19^1 11&-25^2 11&-26^1 ',
#     '11&-14->11&-27^1 11&-25^1 ',
#     '11&-15->11&-28^1 11&-25^2 ',
#     '11&-16->11&-18^1 11&-28^1 11&-29^1 ',
#     '11&-17->11&-30^1 11&-25^2 11&-15^1 ',
#     '11&-18->11&-30^1 11&-29^1 ',
#     '11&-19->11&-31^1 80^1 ',
#     '11&-20->11&-21^1 55^1 8^1 56^1 ',
#     '11&-21->23^1 8^1 ',
#     '11&-22->43^1 44^1 ',
#     '11&-23->25^1 8^1 ',
#     '11&-24->77^1 11&-4^1 ',
#     '11&-25->11&-26^1 11&-27^1 ',
#     '11&-26->76^1 19^1 ',
#     '11&-27->47^1 25^1 ',
#     '11&-28->11&-19^1 11&-32^1 ',
#     '11&-29->11&-25^1 11&-31^1 11&-27^1 ',
#     '11&-30->11&-19^1 19^1 57^1 11&-23^1 25^1 11&-33^1 11&-26^1 11&-24^1 30^1 25^1 15^1 11&-32^1 ',
#     '11&-31->6^1 19^1 ',
#     '11&-32->11&-20^1 76^1 5^1 11&-33^1 ',
#     '11&-33->11&-26^2 11&-14^1 ']
# # print(one_cfg[0])


def join(left, right):
    left.next = right
    right.prev = left


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

    def get_rule_body(self):
        ptr = self.guard.next
        body_string = ''
        while ptr != self.guard:
            if ptr.is_non_terminal():
                body_string += ' ' + ptr.rule.id + '^' + ptr.exp
            else:
                body_string += ' ' + ptr.id + '^' + ptr.exp
            ptr = ptr.next
        body_string = body_string.strip()
        return body_string


class Symbol:
    def __init__(self):
        self.id = '0'
        self.exp = '1'
        self.rule = None
        self.prev = None
        self.next = None

    def is_guard(self):
        return False

    def is_non_terminal(self):
        return False

    def insert_after(self, symbol):
        join(symbol, self.next)
        join(self, symbol)


class NonTerminal(Symbol):
    def __init__(self, rule, exp):
        super().__init__()
        self.rule = rule
        self.exp = exp
        self.rule.count += 1
        self.id = self.rule.id

    def is_non_terminal(self):
        return True


class Terminal(Symbol):
    def __init__(self, sym_num, exp):
        super().__init__()
        self.id = sym_num
        self.exp = exp


class Guard(Symbol):
    def __init__(self, rule):
        super().__init__()
        self.rule = rule
        self.prev = self
        self.next = self

    def is_guard(self):
        return True


def build_dict(all_cfg):
    rule_dict = {}
    main_rules = []
    for one_cfg in all_cfg:
        index = 0
        for line in one_cfg:
            line = line.strip()
            line = line.split('->')
            one_rule = Rule(line[0])
            # print(line[0])
            rule_dict[line[0]] = one_rule
            if index == 0:
                main_rules.append(line[0])
                index += 1

        for line in one_cfg:
            line = line.strip()
            line = line.split('->')
            rule_body = line[1].split(' ')
            # print(rule_body)
            for e in rule_body:
                elem = e.split('^')
                # print(elem)
                if elem[0] in rule_dict.keys():
                    nt = NonTerminal(rule_dict[elem[0]], elem[1])
                    rule_dict[line[0]].last().insert_after(nt)
                else:
                    t = Terminal(elem[0], elem[1])
                    rule_dict[line[0]].last().insert_after(t)
    dict_length_old = 0
    dict_length_new = 1
    i = 0
    unique_dict = {}
    while i < 10:
        dict_length_old = dict_length_new
        unique_num = 0
        unique_dict = {}
        for key, value in rule_dict.items():
            rule_body = value.get_rule_body()
            if rule_body not in unique_dict:
                unique_dict[rule_body] = unique_num
                rule_dict[key].id = str(unique_num)
                unique_num -= 1
            else:
                rule_dict[key].id = str(unique_dict[rule_body])
        dict_length_new = len(unique_dict)
        i += 1
    # print(unique_dict)

    # for main_rule in main_rules:
    #     print(rule_dict[main_rule].get_rule_body())
    return main_rules, unique_dict, rule_dict


def print_rules(rule_dict, one_cfg, rank):
    with open('result.txt', 'w') as out:
        rules_list = [rule_dict[one_cfg[0].split('->')[0]]]
        length = 1
        j = 0
        while j < length:
            temp = rules_list[j].id + '->'
            ptr = rules_list[j].first()
            while True:
                if ptr.is_guard():
                    break
                if ptr.is_non_terminal():
                    if length > ptr.rule.index and rules_list[ptr.rule.index] == ptr.rule:
                        i = ptr.rule.index
                    else:
                        i = length
                        ptr.rule.index = length
                        rules_list.append(ptr.rule)
                        length += 1
                    temp += ptr.rule.id + '^' + str(ptr.exp) + ' '
                else:
                    temp += str(ptr.id) + '^' + str(ptr.exp) + ' '
                ptr = ptr.next
            j += 1
            # print(temp)
            out.write(temp + '\n')
