#include <stdio.h>
#include <stdlib.h>

//! L45 Bitwise operations
// Son más rápidas que las aritmeticas, pero sólo funcionan en enteros, no flotantes

/*
Binary operators
& AND
| OR
^ XOR
~ Complement
>> Right shift
<< Left shift
*/

int main()
{
    unsigned int w1 = 138, w2 = 77, w3 = 0, w4 = 0, w5 = 0, w6 = 0, w7 = 0;

    w3 = w1 & w2;   //Binary AND
    w4 = w1 | w2;   //Binary OR
    w5 = w1 ^ w2;   //Binary XOR puede usarse para cambiar valores entre 2 variables

    /*
    Swap
    w1 ^=  w2;
    w2 ^=  w1;
    w1 ^=  w2;
    */
    w6 = ~(w1);       //Binary complement
    w7 = w1 << 2;

    printf("%d & %d = %d\n", w1, w2, w3);
    printf("%d | %d = %d\n", w4);
    printf("%d ^ %d = %d\n", w5);
    printf("~%d = %d\n", w6);
    printf("size of int in bits: %d\n", 8*sizeof(int));
    printf("%d << 2 = %d\n", w1, w7);

    return 0;
}
