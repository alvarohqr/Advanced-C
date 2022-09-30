#include <stdio.h>
#include <stdlib.h>

typedef int* i_pointer; //! Al tipo int* se le asigna el nuevo nombre de i_pointer

int main()
{
    i_pointer p; //! Same as int* p
    i_pointer a, *b; //! Same as int* a, **b
    i_pointer myArray[10]; //! Sames as int* myArray[10]
    printf("Hello world!\n");
    return 0;
}
