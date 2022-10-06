#include <stdio.h>
#include <stdlib.h>
//# define NDEBUG   //Switch off runtine asserts
#include <assert.h>

//! Assert library: used for debugging
//! assert(condition) if condition = false, abort the execution

int main()
{
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");

    while(scanf("%lf %lf", &x, &y) == 2 && (x != 0 || y!= 0)){
            z = x * x - y * y;
            assert(z >= 0);
            printf("answer is: %lf\n",sqrt(z));
            puts("Next pair of numbers: ");
    }
    puts("Done");

    return 0;
}

