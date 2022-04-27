#if defined  __aarch64__
#define ASM_PAUSE "yield\n\t"
#define ASM_READ "ldr %[I5], [%[POINT]]\n\t""add %[POINT], %[POINT], #8192\n\t"
#elif defined __x86_64__
#define ASM_PAUSE "pause\n\t"
#define ASM_READ "movslq (%[POINT]), %[I5]\n\t""addq $8192,%[POINT]\n\t"
#endif
#include <stdio.h>
#include <stdlib.h>
#include "papi.h"
#include <string.h>
#include <sys/time.h>
#define PAPIEVENT_ENVIRONMENT_VARIABLE "PAPI_MON_EVENTS"
long long ** values;
int EventSet=PAPI_NULL;
int event_count;
int papi_retval, num_tests = 1, num_events = 0, i = 0;
volatile double a = 0.5, b = 2.2;

long long** allocate_values_space(int num_tests, int num_events) {
    long long **values;
    int i;

    values =
            ( long long ** ) malloc( ( size_t ) num_tests *
                                     sizeof ( long long * ) );
    if ( values == NULL ) {
        printf("error! cannot allocate memory\n");
        exit( 1 );
    }
    memset( values, 0x0, ( size_t ) num_tests * sizeof ( long long * ) );

    for ( i = 0; i < num_tests; i++ ) {
        values[i] =
                ( long long * ) malloc( ( size_t ) num_events *
                                        sizeof ( long long ) );
        if ( values[i] == NULL ) {
            printf("error! cannot allocate memory\n");
            exit( 1 );
        }
        memset( values[i], 0x00, ( size_t ) num_events * sizeof ( long long ) );
    }
    return ( values );
}
void
dummy( void *array )
{
/* Confuse the compiler so as not to optimize
   away the flops in the calling routine    */
/* Cast the array as a void to eliminate unused argument warning */
    ( void ) array;
}

void do_flops( int n )
{
    int i;
    double c = 0.11;

    for ( i = 0; i < n; i++ ) {
        c += a * b;
    }
    dummy( ( void * ) &c );
}
void block36(){
	int *a=(int*)malloc(sizeof(int)*100000000);
	papi_retval = PAPI_start(EventSet);
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
	papi_retval=PAPI_read(EventSet, values[0]);
	for (int i = 0; i < event_count; i++) printf("%lld ", values[0][i]);
}
char** read_PAPIEvents_from_environment_variables(int* event_count) {
    char *pathvar = getenv(PAPIEVENT_ENVIRONMENT_VARIABLE);
    char** res;
    int count = 0, find = 0; int i = 0;
    for (i = 0; i < strlen(pathvar); i++) {
        if (pathvar[i] != ':' && find == 0) {
            count++;
            find = 1;
        } else if (pathvar[i] == ':' && find == 1) {
            find = 0;
        }
    }
    res = (char**) malloc((count)*sizeof(char*));
    int start=0;
    int res_count = 0;
    for (i = 0; i < strlen(pathvar); i++) {
        if (pathvar[i] != ':' && find == 0) {
            find = 1;
            start = i;
        } else if (pathvar[i] == ':' && find == 1) {
            find = 0;
            res[res_count] = (char*)malloc((i-start+1)*sizeof(char));
            memset(res[res_count], 0, (i-start+1)*sizeof(res[res_count]));
            memcpy(res[res_count], pathvar+start, i-start);
            res_count++;
        }
    }
    if (find==1) {
        res[res_count] = (char*)malloc((i-start+1)*sizeof(char));
        memset(res[res_count], 0, (i-start+1)*sizeof(res[res_count]));
        memcpy(res[res_count], pathvar+start, strlen(pathvar)-start);
        res_count++;
    }
    *event_count = count;
    return (res);
}

int main() {
    char **papi_events;
    char event_name1[] = "PAPI_TOT_CYC";
    char event_name2[] = "PAPI_TOT_INS";
    char event_name3[] = "PAPI_LST_INS";
    char event_name4[] = "PAPI_L1_DCM";
/*    papi_retval = PAPI_library_init(PAPI_VER_CURRENT);
    if (papi_retval != PAPI_VER_CURRENT) {
        printf("PAPI_library_init Failed! retval = %d\n", papi_retval);
    }
    papi_retval = PAPI_create_eventset(&EventSet);
    if (papi_retval != PAPI_OK) {
        printf("PAPI_create_eventset Failed!, retval is %d\n", papi_retval);
    }
    papi_events = read_PAPIEvents_from_environment_variables(&num_events);
    event_count = num_events;
    for (i = 0; i<num_events; i++) {
        papi_retval = PAPI_add_named_event(EventSet, papi_events[i]);
        if (papi_retval != PAPI_OK) {
            printf("PAPI_add_named_event Failed! Event is %s, retval is %d\n", papi_events[i], papi_retval);
        }
    }*/
papi_retval = PAPI_library_init(PAPI_VER_CURRENT);
    if (papi_retval != PAPI_VER_CURRENT) {
        printf("PAPI_library_init Failed! retval = %d\n", papi_retval);
    }
    papi_retval = PAPI_multiplex_init();
    if (papi_retval != PAPI_OK)
        printf("PAPI_multiplex_init Failed! retval = %d\n", papi_retval);
    papi_retval = PAPI_create_eventset(&EventSet);
    if (papi_retval != PAPI_OK) {
        printf("PAPI_create_eventset Failed!, retval is %d\n", papi_retval);
    }
    papi_retval = PAPI_assign_eventset_component(EventSet, 0);
    if (papi_retval != PAPI_OK)
        printf("PAPI_assign_eventset_component Failed!, retval is %d\n",
               papi_retval);
    papi_retval = PAPI_set_multiplex(EventSet);
    if (papi_retval != PAPI_OK)
        printf("PAPI_set_multiplex Failed! retval = %d\n", papi_retval);
    papi_events = read_PAPIEvents_from_environment_variables(&num_events);
    event_count = num_events;
    for (i = 0; i<num_events; i++) {
        papi_retval = PAPI_add_named_event(EventSet, papi_events[i]);
        if (papi_retval != PAPI_OK) {
            printf("PAPI_add_named_event Failed! Event is %s, retval is %d\n", papi_events[i], papi_retval);
        }
    }


    values = allocate_values_space(1, num_events);
block36();
}
