#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double avg(double v1, double v2, ...);



/*
Variadic function

    1) Prototype using an ellipsis (...): void f1(int a, int b, ...);
    2) Create a va_list variable.
    3) Initialize the variable to an argument list
        va_list pa;
        va_start(parg, b);
    4) Access the contents of the argument list using va_arg()
    5) Clean up by using va_end()

    double someFunction(int lim,. ..){
        va_list pa;
        va_start(pa, lim);
        double wea = va_arg(ap, double);
        va_end();
    }

*/

int main()
{
    double v1 = 10.5, v2 = 12.3;
    int num1 = 6, num2 = 14;
    long num3 = 12L, num4 = 36L;

    printf("Average = %.2lf\n", avg(v1, 2.5, v2, 0.0));
    printf("Average = %.2lf\n", avg(12.6, 2.5, 15.5, 0.0));
    printf("Average = %.2f\n", avg((double)num2, v2, (double)num3, v1, (double)num4), 0.0);

    return 0;
}

double avg(double v1, double v2, ...){

    va_list parg;       //Pointer for variable argument
    double sum = v1 + v2;
    double value = 0.0;

    int count = 2;

    va_start(parg,v2);

    while((value = va_arg(parg, double)) != 0.0){
        sum += value;
        count++;
    }

    va_end(parg);

    return sum/count;

}
