#include <stdio.h>
#include <stdlib.h>

/*
Lesson 51 Challenge:
    Write a C program to input any number from a user
        * the program should check wether nth bit of the given number is set(1) or not
        * the program should seth nth bit of the given number as 1
*/
int main()
{
    int number, nth_bit;
    number = 0; nth_bit = 0;

    int bit_check = 0, setted = 0;

    printf("Enter any integer number: ");
    scanf("%d", &number);
    printf("\nEnter nth bit to check and set (0-31): ");
    scanf("%d", &nth_bit);

    bit_check = (number >> nth_bit) & 1; //! Se desplaza hasta tener el nth bit como el LSB

    printf("%d bit is set to: %d\n", nth_bit, bit_check);

    setted = (1 << nth_bit) | number; //! 0001 se desplaza nth bits a la derecha a modo de tener 1 en la posicion nth
    printf("%Number after setting %d bit to 1: %d", nth_bit, setted);


    return 0;
}
