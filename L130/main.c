#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>

//! Date and time functions

/*
    clock_t clocl(void); returns the processor time used by
    the program since some implementation-defined reference point.
    time_t time(time_t *timer) returns the calendar time as a value
    of type time_t.

*/

int main()
{
    time_t calendar_start = time(NULL);     // initial calendar time
    clock_t cpu_start = clock();            // initial processor time
    int count = 0;                          // count of number of loops

    const long long it = 1000000000LL;      // loop iterations
    char ans = 'y';
    double x = 0.0;

    printf("Initial clock time = %lld Initial calendar time = %lld\n", (long long)cpu_start, (long long)calendar_start);

    while(tolower(ans) == 'y'){
        for (long long i = 0; i < it; ++i){
            x = sqrt(3.14159265);
        }
        printf("%lld square roots completed.\n", it*(++count));
        printf("Do you want to run some more (y or n)? \n");
        scanf("%c", &ans);
    }

    clock_t cpu_end = clock();
    time_t calendar_end = time(NULL);

    printf("Final clock time = %lld, Final calendar time = %lld\n", (long long)(cpu_end), (long long)calendar_end);
    printf("CPU time for %lld iterations is %.2lf seconds\n", count * it, ((double)(cpu_end-cpu_start))/CLOCKS_PER_SEC);
    printf("Elapsed calendar time to execute the program is %8.2lf seconds\n", difftime(calendar_end, calendar_start));

    return 0;
}
