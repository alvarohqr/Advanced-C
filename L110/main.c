#include <stdio.h>
#include <stdlib.h>

//! CHALLENGE DOUBLE POINTERS

/*
Challenge 1

    Write a program in C that creates, assigns, and access some double pointers.
        1. Create a normal integer (non-pointer) and assign it a random value.
        2. Create a single integer pointer variable.
        3. Create a double integer pointer variable (pointer to a pointer).
        4. Assign the address of the normal integer variable (step 1) to the
           single pointer (step 2).
        5. Assign the address of the single pointer (Step 2) to the double
           pointer variable (step 3).

    Display the following output using all possible syntax:
        * All possible ways to find value of the normal integer variable (step 1)
        * All possible ways to find address of the normal integer variable (step 1)
        * All possible ways to find value of the single pointer variable (step 2)
        * All possible ways to find the address of the single pointer variable (step 2)
        * All possible ways to print the double pointer value and address (step 3)

*/
int main()
{
    //! Step 1
    int a = 123;
    //! Step 2 & 3
    int *ptr1 = NULL;
    int **ptr2 = NULL;
    //! Step 4
    ptr1 = &a;
    //! Step 5
    ptr2 = &ptr1;

    printf("All possible ways to find value of the normal integer variable:\n");
    printf("Value of a is: %d\n", a);
    printf("Value of a using ptr1 is : %d\n", *ptr1);
    printf("Value of a using ptr2 is : %d\n", **ptr2);

    printf("\nAll possible ways to find address of the normal integer variable:\n");
    printf("Address of a is: %u\n", &a);
    printf("Address of a using ptr1 is: %u\n", ptr1);
    printf("Address of a using ptr2 is: %u\n", *ptr2);

    printf("\nAll possible ways to find value of the single pointer variable\n");
    printf("Value of a using ptr1 is: %u\n", ptr1);
    printf("Value of a using ptr2 is: %u\n", *ptr2);

    printf("\nAll possible ways to find the address of the single pointer variable:\n");
    printf("Address of ptr1 is: %u\n", &ptr1);
    printf("Address of ptr1 using ptr2 is: %u\n", &(*ptr2));

    printf("\nAll possible ways to print the double pointer value and address\n");
    printf("Value of ptr2 is: %d", ptr2);
    printf("Address of ptr2 is: %u", &ptr2);

    return 0;
}
