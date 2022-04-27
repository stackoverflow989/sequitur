block0(){
	int *a=(int*)malloc(sizeof(int)*100000000);
	papi_retval = PAPI_start(EventSet);
	long i1=12345,i2=67890,i3=54321;
	register long i4=12345,i5=67890,i6=54321;
	double d1=12345,d2=999;
	for (register long i = 0;i<1;i++){
		i4 = rand()%7;for (register int j = 0;j < i4;j++) if (i4 ==0||i4==1||i4==2||i4==6||i4==5||i4==4||i4==3) i5+=999;
	}
	for (register long t = 0;t <0;t++){
		__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
		for (register long i = 0;i<12200;i++){
			__asm volatile (
				ASM_READ				:[I5] "=r" (i5),[POINT] "+r" (p)
			);
		}
	}
	__asm volatile ("movq   %[a], %[POINT]\n\t":[POINT] "=r" (p):[a] "r" (a));
	for (register long i = 0;i<1;i++){
		__asm volatile (
			ASM_READ
			:[I5] "=r" (i5),[POINT] "+r" (p)
		);
	}
	papi_retval=PAPI_read(EventSet, values[0]);
	for (int i = 0; i < event_count; i++) printf("%lld ", values[0][i]);
}
