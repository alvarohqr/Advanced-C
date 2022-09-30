#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

//! va_copy

double sample_stddev(int count, ...);

int main()
{
    printf("%f\n", sample_stddev(4, 3.3, 2.5, 26.5, 42.1));
    return 0;
}

double sample_stddev(int count, ...){
    double sum = 0;
    //int i = 1;
    va_list args1;
    va_start(args1, count);

    va_list args2;
    va_copy(args2, args1);

    for (int i = 1; i < count; ++i){
        double num = va_arg(args1, double);
        sum += num;
    }

    va_end(args1);

    double mean = sum / count;
    double sum_sq_diff = 0;

    for (int j = 1; j < count; ++j){
        double num = va_arg(args2, double);
        sum_sq_diff += (num-mean) * (num - mean);
    }
    va_end(args2);

    return sqrt(sum_sq_diff/count);

}
