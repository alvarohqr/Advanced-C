#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//! Double pointer user cases
    // The biggest reason to use a double pinter is when you need to
    // change the value of the pointer passed to a function as the
    // function argument: simulate pass by reference.

void foo(int *ptr);
void foo2(int **ptr);

int main()
{
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;

    foo(ptr);   //Stills pointing to the address of a
    printf("%d\n", *ptr); //Stills points to 10, inside foo ptr points to 5

    foo2(&ptr);
    printf("%d\n", *ptr);

    return 0;
}

void foo(int *ptr){
    int a = 5;
    ptr = &a;

}void foo2(int **ptr){
    int a = 5;
    *ptr = &a;
}
