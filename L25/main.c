#include <stdio.h>

//! Uso de variables externas


int i = 10; //Variable local, se declara normal

void foo(void);

int main()
{
    printf("%d \n", i);
    foo ();
    printf("%d \n", i);
    return 0;
}
