#include <stdio.h>
#include <stdlib.h>


/*
Accessing unions members:
    We use the dot (.) operator to access members of a union
    To access pointer variables, we use the -> operator (indirection operator)

        ptru-> var
        name.var
        (*ptru).var
*/


union mixed{
    char c;
    float f;
    int i;
};

union number{
    int x;
    double y;
};
//! Inicializando por medio de una función
void foo(union number n){
    union number x = n;
}
int main()
{
    union mixed xx;
    xx.c = 'A';
    printf("Character = %c\n", xx.c);

    /*
    x.f = 3.14
    print("Value = %f\n", xx.f);

    x.i = 12;
    print("Value = %d\n", xx.i);
    */

    /*
    union number value;
    value.x = 100;
    printf("\nValue of integer x: %d\n", value.x);
    printf("Value of double y: %f\n", value.y);

    value.y = 100;
    printf("\nValue of integer x: %d\n", value.x);
    printf("Value of double y: %f\n", value.y);
    */

    //! Declarando las variables de union
    union number x;
    union number *y = &x;

    y->y= 100.0; //put a double into the same union
    printf("\nValue of integer x: %d\n", y->x);
    printf("Value of double y: %f\n", y->y);

    return 0;
}
