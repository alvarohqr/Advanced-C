#include <stdio.h>
#include <stdlib.h>

//! Void pointers
/*
send(void * pData, int nLength);

char *data = "blah";
send(data, strlen(data));
*/
int main()
{
    int i = 10;
    float f = 13.3;
    char c = 'w';

    void *vptr = NULL;
    vptr = &i;

    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &c;
    printf("Value of c = %c\n", *(char *)vptr);

    return 0;
}
