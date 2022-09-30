#include <stdio.h>
#include <stdlib.h>

#define i_pointer int *

i_pointer titi, tata;   //! Al usar #define solo se sustituye i_pointer con int *
                        //! por lo que tendriamos int* titi e int tata

typedef char * char_ptr;

char_ptr chin, gon;     //! En cambio al emplear typedef se remplaza el nombre del tipo.

int main()
{
    i_pointer p; //! Same as int* p
    i_pointer a, *b; //! Same as int* a, **b
    i_pointer myArray[10]; //! Sames as int* myArray[10]
    printf("Hello world!\n");
    return 0;
}

