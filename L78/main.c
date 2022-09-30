#include <stdio.h>
#include <stdlib.h>

/*
    RECURSION CHALLENGE

        Write a program which will calculate the sum
        of numbers from 1 to n using recursion

*/

int Rsum(int n);
int GCD(int a, int b);
char *reverser(char *arr);

int main()
{
    printf("Sum = %d\n", Rsum(5));
    printf("GCD of 10 and 50: %d\n", GCD(10,50));
    printf("The reversed string is: %s\n",reverser("ALVARO"));
    return 0;
}

int Rsum(int n){

    int sum = 0;

    if(n >= 1){
        sum += n + Rsum(n-1);
    }
    return sum;
}

int GCD(int a, int b){

    while(a != b){
        if (a > b){
            return GCD(a-b, b);
        }else{
            return GCD(a, b-a);
        }
    }
}

char *reverser(char * arr){
    static int i = 0;
    static char rev[100];

    if (*arr){
        reverser(arr + 1);
        rev[i++] = *arr;
    }
    return rev;
}
