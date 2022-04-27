import copy
class Param:
    def __init__(self) -> None:
        self.cachenum = 0
        self.branchnum = 0
        self.unroll = 0
        self.restbranch = 0
        self.nop = 0
        self.div = 0
        self.add = 0
        self.pause = 0

    def print_param(self) -> None:
        print(self.cachenum,self.branchnum,self.unroll,self.restbranch,self.nop,self.div,self.add,self.pause)

    def all_small_part(self) -> int:
        return self.nop+self.add+self.div+self.pause

class Block:
    def __init__(self,target,number) -> None:
        self.target = copy.deepcopy(target)
        self.trans = {"lst":0,"l1_dcm":1,"ins":2,"cyc":3,"br_cn":4,"br_msp":5}
        self.blockname = 'block'+str(number)
        self.param = Param()
        self.borrow = 0

    def gen_fun_block(self,path,mode='withpapi') -> None:
        self.check_if_borrow()
        with open(path,'a') as f:
            f.write("void "+self.blockname+'(){\n')
            if mode == 'withpapi':
                f.write("\tint *a=(int*)malloc(sizeof(int)*100000000);\n")
                f.write("\tpapi_retval = PAPI_start(EventSet);\n")

            f.write(self.gen_start_var())
            f.write(self.gen_branchmiss())
            f.write(self.gen_add())
            f.write(self.gen_div())
            f.write(self.gen_nop())
            f.write(self.gen_pause())
            f.write(self.gen_loop())
            f.write(self.gen_cachemiss())

            if mode == 'withpapi':
                f.write("\tpapi_retval=PAPI_read(EventSet, values[0]);\n")
                f.write("\tfor (int i = 0; i < event_count; i++) printf(\"%lld \", values[0][i]);\n")
            f.write('}\n')

    def check_if_borrow(self) -> None:
        if self.param.nop == 0 and self.param.add == 0 and self.param.div == 0 and self.param.pause == 0:
            self.borrow = 0
            return
        all = self.param.all_small_part()
        if self.param.restbranch*100<all and self.param.restbranch <= self.param.branchnum:
            self.borrow = all//100
            if self.borrow>self.param.branchnum:
                self.borrow = self.param.branchnum
        

    def gen_start_var(self) -> str:
        s = "\tlong i1=12345,i2=67890,i3=54321;\n"
        s += "\tregister long i4=12345,i5=67890,i6=54321;\n"
        s += "\tdouble d1=12345,d2=999;\n"
        s += "\tint *p;"
        return s

    def gen_branchmiss(self) -> str:
        s = "\tfor (register long i = 0;i<" + str(self.param.branchnum-self.borrow) + ";i++){\n"
        s += "\t\ti4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;\n"
        s += "\t}\n"
        return s

    def gen_cachemiss(self) -> str:
        cycle = 12200 // (1<<self.param.unroll)
        s = "\tfor (register long t = 0;t <" + str(self.param.cachenum//cycle) + ";t++){\n"
        s += "\t\t__asm volatile (\"movq   %[a], %[POINT]\\n\\t\":[POINT] \"=r\" (p):[a] \"r\" (a));\n"
        s += "\t\tfor (register long i = 0;i<" + str(cycle) + ";i++){\n"
        for i in range(1<<self.param.unroll):
            s += "\t\t\t__asm volatile (\n"
            s += "\t\t\t\tASM_READ\n"
            s += "\t\t\t\t:[I5] \"=r\" (i5),[POINT] \"+r\" (p)\n\t\t\t);\n"
        s += "\t\t}\n"
        s += "\t}\n"

        s += "\t__asm volatile (\"movq   %[a], %[POINT]\\n\\t\":[POINT] \"=r\" (p):[a] \"r\" (a));\n"
        s += "\tfor (register long i = 0;i<" + str(self.param.cachenum%cycle) + ";i++){\n"
        for i in range(1<<self.param.unroll):
            s += "\t\t__asm volatile (\n"
            s += "\t\t\tASM_READ\n"
            s += "\t\t\t:[I5] \"=r\" (i5),[POINT] \"+r\" (p)\n\t\t);\n"
        s += "\t}\n"
        return s

    def gen_add(self) -> str:
        if self.param.add == 0:return ""
        cycle = self.param.add//100
        if self.borrow < self.param.all_small_part()//100 and self.borrow != 0:
            cycle = self.borrow*(self.param.add/self.param.all_small_part())//100
        s = "\tfor (register long i = 0;i<" + str(cycle) + ";i++){\n"
        for i in range(100):
            s += "\t\ti1 = i2+i3;\n"
        if self.borrow != 0:s += "\t\ti4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;\n"
        s += "\t}\n"
        return s

    def gen_div(self) -> str:
        if self.param.div == 0:return ""
        cycle = self.param.div//100
        if self.borrow < self.param.all_small_part()//100 and self.borrow != 0:
            cycle = self.borrow*(self.param.div/self.param.all_small_part())//100
        s = "\tfor (register long i = 0;i<" + str(cycle) + ";i++){\n"
        for i in range(100):
            s += "\t\td1 = d1/d2;\n"
        if self.borrow != 0:s += "\t\ti4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;\n"
        s += "\t}\n"
        return s

    def gen_nop(self) -> str:
        if self.param.nop == 0:return ""
        cycle = self.param.nop//100
        if self.borrow < self.param.all_small_part()//100 and self.borrow != 0:
            cycle = self.borrow*(self.param.nop/self.param.all_small_part())//100
        s = "\tfor (register long i = 0;i<" + str(cycle) + ";i++){\n"
        s += "\t\t__asm volatile("
        for i in range(100):
            s += "\t\t\t\"nop\\n\\t\"\n"
        s += "\t\t);\n"
        if self.borrow != 0:s += "\t\ti4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;\n"
        s += "\t}\n"
        return s

    def gen_pause(self) -> str:
        if self.param.pause == 0:return ""
        cycle = self.param.pause//100
        if self.borrow < self.param.all_small_part()//100 and self.borrow != 0:
            cycle = self.borrow*(self.param.pause/self.param.all_small_part())//100
        s = "\tfor (register long i = 0;i<" + str(cycle) + ";i++){\n"
        for i in range(100):
            s += "\t\t__asm volatile(ASM_PAUSE);\n"
        if self.borrow != 0:s += "\t\ti4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;\n"
        s += "\t}\n"
        return s

    def gen_loop(self) -> str:
        cycle = self.param.restbranch - self.param.all_small_part()//100
        if self.borrow < self.param.all_small_part()//100 and self.borrow != 0:
            cycle = self.param.restbranch - self.borrow//100
        s = "\tfor (register long i = 0;i<" + str(cycle) + ";i++){\n"
        s += "\t}\n"
        return s

if __name__=="__main__":
    block = Block([1,2,3,4,5,6],0)
    block.gen_fun_block('./code/code.c','withpapi')