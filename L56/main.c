#include <stdio.h>
#include <stdlib.h>

/*
goto statement
    Goes to a certain label or  branch, it can be located previously or after the goto statement.

Problems:
    interrupts the normal sequential flow of a program+
    makes the code much harder to maintain and follow

Use case:
    To exit a deeply nested control structures efficiently
*/

int main()
{
    cons int maxInput = 5;
    int i = 0;
    double number, average, sum = 0.0;

    for(i = 1; i<=maxInput; i++){
        printf("%d) Enter a number: ",i);
        scanf("%lf",&number);
        if (number < 0.0){
            goto jump;
        }
        sum += number;
    }

    jump:
        average = sum/(i-1);
        printf("Sum = %.2lf\n",sum);
        printf("Average = %.2lf\n",average);



    printf("Hello world!\n");
    return 0;
}

