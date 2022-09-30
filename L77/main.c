#include <stdio.h>
#include <stdlib.h>

int Factorial(int n);
void up_and_down(int n);

int main()
{
    printf("Factorial Function\n");
    for (int i  = 0; i<8; i++){
        printf("%d! = %d\n", i, Factorial(i));
    }

    printf("\nUp and Down Function\n");
    up_and_down(1);
    return 0;
}

int Factorial(int n){
    int result = 0;
    if(n == 0){
        result = 1;
    }else{
        result = n * Factorial(n-1);
    }
    return result;
}

void up_and_down(int n){
    printf("Level %d: in location %p\n", n, &n);

    if(n < 4){
        up_and_down(n+1);
    }

    printf("LEVEL %d: in location %p\n", n, &n); //Sigue desde donde lo dejo

}
