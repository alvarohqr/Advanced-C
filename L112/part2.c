#include <stdio.h>
#include <stdlib.h>
//! Function pointers

//! Taking arguments
void funct1(inta );
void funct2(int b);

typedef void FuncType(int);

int main()
{
    FuncType *func_ptr = NULL;
    func_ptr = funct1;

    (*func_ptr)(100);

    func_ptr = funct2;
    (*func_ptr)(200);
    return 0;
}

void funct1(int a){
    printf("funct1: %d\n",a);
}

void funct2(int b){
    printf("funct2: %d\n",b);
}
