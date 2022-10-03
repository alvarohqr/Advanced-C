#include <stdio.h>
#include <stdlib.h>

//! CHALLENGE DOUBLE POINTERS

/*
Challenge 2:

    Write a program in C that includes a function that modifies
    a pointers:
        * Not the value that the pointer is pointing to
        * The actual value of the pointer (the address that the
          pointer is pointing to)

    First create a function named allocateMemory that takes a singles
    integer pointer as a function parameter
        * void allocateMemory(int *ptr);
        * this function should allocate memory for this pointer

    Then create a main function that does the following;
        * creates an integer pointer and initializes it to NULL
        * invokes the allocateMemory function, passing the integer
          pointer just created
        * assign a value to the integer pointer that is pointing to (de-reference)
        * print the value of what the pointer is pointing to (de-reference)
        * free the pointer

    At this point the program will crash because the pointer can't be freed, so
    in order to avoid it, you should modifier the function to take a double pointer.
*/

void memoryAllocate(int **ptr);
int main()
{
    int *ptr = NULL;
    memoryAllocate(&ptr);
    *ptr = 123;
    printf("%d\n", *ptr);

    return 0;
}

void memoryAllocate(int **ptr){
    *ptr = (int *)malloc(sizeof(int));
}
