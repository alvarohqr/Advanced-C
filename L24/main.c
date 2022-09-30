#include <stdio.h>
#include <stdlib.h>

int func_name();

int main()
{
    int x; //variable local

    int m;
    scanf("%d", &m);
    {
        int i; //Tanto m como i se pueden usar en el bloque de scanf y
               //así con las variables que se declaren
    }

    return 0;
}


char *myFunction(){
    char x[] = "apple";

    return x;
}


int func_name(){

    int y; //variable local

    return y;
}
