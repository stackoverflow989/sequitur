all: block.c block.h code0.c
	mpicc -c block.c -std=c99
	mpicc -o code code0.c block.o -std=c99

clean:
	rm *.trace