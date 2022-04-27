#include "block.h"
int initial(){a=(int*)malloc(sizeof(int)*100000000);}
#if defined  __aarch64__
#define ASM_PAUSE "yield\n\t"
#define ASM_READ "ldr %[I5], [%[POINT]]\n\t""add %[POINT], %[POINT], #8192\n\t"
#elif defined __x86_64__
#define ASM_PAUSE "pause\n\t"
#define ASM_READ "movslq (%[POINT]), %[I5]\n\t""addq $8192,%[POINT]\n\t"
#endif
void block0(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<999;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<19;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block1(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<-109;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<3;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block2(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<13316;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<503018;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<7668;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3846086;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<71608;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<7937929;i++){
	}
	for (register long t = 0;t <16;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<6202;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block3(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<190;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<5;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block4(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<165;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<9;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<340;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<25;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<1300;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<994;i++){
	}
	for (register long t = 0;t <4;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<1525;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<222;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block5(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<9781;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<85349;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<8287;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<483126;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<3711;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2492628;i++){
	}
	for (register long t = 0;t <45;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<5761;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block6(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<165;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<160;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<351;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<2;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<676;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<3494;i++){
	}
	for (register long t = 0;t <2;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<1525;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1262;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block7(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<31222;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<71019;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<74668;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<986712;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<6085;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1674817;i++){
	}
	for (register long t = 0;t <467;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<8622;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block8(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<3242;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<7758;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<250;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<22187;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<14718;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1217343;i++){
	}
	for (register long t = 0;t <16;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<6434;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block9(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<2765;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<2;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<8846;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<2;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<-6680;i++){
	}
	for (register long t = 0;t <3;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<6100;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<4977;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block10(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<103;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<4034;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<13;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<11349;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<129;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<874;i++){
	}
	for (register long t = 0;t <5;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<6100;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<3855;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block11(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<6525;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<369;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<18080;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<48704;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<10345;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2188757;i++){
	}
	for (register long t = 0;t <58;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<7240;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block12(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<10407;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<400483;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<51961;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3465551;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<3765;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<6654219;i++){
	}
	for (register long t = 0;t <46;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<2216;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block13(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<6884;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<79282;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<14727;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<487750;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<5938;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2566754;i++){
	}
	for (register long t = 0;t <45;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<8355;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block14(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<3412;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<1946;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<3127;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<21423;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<13432;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1115858;i++){
	}
	for (register long t = 0;t <29;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<6563;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block15(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<3248;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<83945;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<335;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<527962;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<13853;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1942187;i++){
	}
	for (register long t = 0;t <14;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1024;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block16(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<7432;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<3050;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1205;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block17(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<1492;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<15;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block18(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<108;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<83;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<0;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<604;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<3;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2371;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<7677;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block19(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<6407;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<57;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block20(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<107;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<763;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<175;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1282;i++){
	}
	for (register long t = 0;t <1;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<6100;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<2418;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block21(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<-166;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<0;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block22(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<13373;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<472662;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<31618;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3851620;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<31930;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<7885003;i++){
	}
	for (register long t = 0;t <5;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<5816;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block23(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<150;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<1055;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2269;i++){
	}
	for (register long t = 0;t <2;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<1525;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<207;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block24(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<35933;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<132507;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<8173;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<787146;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<114519;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1525505;i++){
	}
	for (register long t = 0;t <454;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<7911;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block25(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<1448;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<14;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3177;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<4;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<-1855;i++){
	}
	for (register long t = 0;t <2;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<190;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block26(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<1393;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<5232;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<-5822;i++){
	}
	for (register long t = 0;t <1;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<346;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block27(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<6985;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<446398;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<10190;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3378926;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<77367;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<6834288;i++){
	}
	for (register long t = 0;t <45;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<7078;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block28(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<8957;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<15975;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<2103;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<17894;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<24873;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2121523;i++){
	}
	for (register long t = 0;t <58;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<10869;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block29(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<164;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<8;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block30(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<107;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<10523;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<120;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block31(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<13885;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<520677;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<3996;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3928949;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<79506;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<8240120;i++){
	}
	for (register long t = 0;t <3;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1647;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block32(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<0;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<171;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<87;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<37;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<237;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<1836;i++){
	}
	for (register long t = 0;t <1;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<3050;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1315;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block33(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<18662;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<510978;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<4693;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<3879136;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<76065;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<7850728;i++){
	}
	for (register long t = 0;t <17;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<9296;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block34(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<18650;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<103830;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<42304;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<894049;i++){
		__asm volatile(			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
		);
	}
	for (register long i = 0;i<64729;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
	}
	for (register long i = 0;i<2011410;i++){
	}
	for (register long t = 0;t <471;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1117;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block35(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<386;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<35;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<15;i++){
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		__asm volatile(ASM_PAUSE);
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<-403;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<381;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<95;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
void block36(){
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	int *p;	for (register long i = 0;i<967;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long i = 0;i<388;i++){
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
		i1 = i2+i3;
	}
	for (register long i = 0;i<81;i++){
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
		d1 = d1/d2;
	}
	for (register long i = 0;i<31407;i++){
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ
				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<4033;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
}
