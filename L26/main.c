#include <stdio.h>
#include <stdlib.h>

int myfunc();

int main()
{
    //! retiene el valor anterior, no se reinicializa
    //! cada vez que se llama
    //printf("%d\n", myfunc());
    //printf("%d\n", myfunc());

    for (int i = 0; i<5; i++){
        myfunc();
    }

    return 0;
}

int myfunc(){
    static int count = 0;
    int localvar = 0;
    printf("automatic = %d, static = %d\n",localvar, count);
    count++;
    localvar++;
    //return count;
}
