#include <stdio.h>
#include <stdlib.h>

//! #pragma GCC poison is used to remove an identifier completely from the program
//#pragma GCC poison printf

#pragma GCC warning "hello"
#pragma GCC error "what"
#pragma message "ok"
int main()
{
   // printf("Hello world!\n");
    return 0;
}
