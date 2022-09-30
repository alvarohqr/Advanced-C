#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*
Variatic functions challenge 1:

    Write a program that creates a variadic function that will
    allow a programmer to add any amount of numbers (integers)
    that they would like to be added together

    In order to know how many numbers are being passed to this
    variadic function, you can use the first argument as the number
    of arguments or any other.
*/


int addingNumbers(int count, ...);

int main()
{
    printf("Sum = %d\n", addingNumbers(3, 10, 20, 30));
    printf("Sum = %d\n", addingNumbers(4, 10, 20, 30, 40));
    printf("Sum = %d\n", addingNumbers(5, 10, 20, 30, 40, 50));
    return 0;
}

int addingNumbers(int count, ...){
    int sum = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++){
        int total = va_arg(args, int);
        sum += total;
        //sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
*/
/*
Variatic functions challenge 1:

    Write a program that creates a variadic function that will
    allow a programmer to add any amount of numbers (integers)
    that they would like to be added together

    In order to know how many numbers are being passed to this
    variadic function, you can use the first argument as the number
    of arguments or any other.
*/

/*
double addingNumbers(int count, ...);

int main()
{
    printf("Sum = %lf\n", addingNumbers(3, 10.5, 20.8, 30.5));
    printf("Sum = %lf\n", addingNumbers(4, 10.2, 20.4, 30.2, 40.2));
    printf("Sum = %lf\n", addingNumbers(5, 10.2, 20.4, 30.2, 40.2, 10.0));
    return 0;
}

double addingNumbers(int count, ...){
    double sum = 0;
    va_list args;
    va_start(args, count);
    double total = 0;
    for (int i = 0; i < count; i++){
        total = va_arg(args, double);
        sum += total;
        //sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}

*/