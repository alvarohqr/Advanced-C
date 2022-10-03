#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//! Double pointer user cases
    // The biggest reason to use a double pinter is when you need to
    // change the value of the pointer passed to a function as the
    // function argument: simulate pass by reference.

void foo(char **ptr);

int main()
{
    char *ptr = NULL;

    foo(&ptr);
    printf("%s\n", ptr);

    free(ptr);

    return 0;
}

void foo(char **ptr){
    //! Allocating memory for a copy
    *ptr = malloc(255);
    strcpy(*ptr, "Hello World!");
}

