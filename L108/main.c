#include <stdio.h>
#include <stdlib.h>

//! Double pointers

int main()
{
    int a  = 10;

    int *p1 = NULL;     //Puede almacenar la dirección de a.
    int **p2 = NULL;    //Solo puede almacenar la direccion de p1 u otro apuntador.

    p1 = &a;
    p2 = &p1;

    printf("Address of a = %u\n", &a);
    printf("Address of p1 = %u\n", &p1);
    printf("Address of p2 = %u\n", &p2);
    //! Dereferencing them
    printf("\nValue at the address stored by p2 = %u\n", *p2);
    printf("Value at the address stored by p1 = %u\n", *p1);
    printf("\nValue of **p2 = %d\n", **p2);


    return 0;
}
