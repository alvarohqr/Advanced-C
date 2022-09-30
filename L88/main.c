#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
PREPROCESSOR
CONDITIONAL COMPILATION

#if, #elif, #else, #ifdef, #elifdef, #ifndef, #elifndef ends with #endif
*/

#define CHECKING
#define LIMIT 4

#define US 0
#define UK 1
#define FR 2
#define GR 2
#define Country US

int main()
{
    /*
    int i = 0;
    int total = 0;

    for(i = 1; i <= LIMIT; i++){
        total += 2 * pow(i,2) + 1;

        #ifdef CHECKING
            printf("i = %d, running total = %d\n", i, total);
        #endif // CHECKING
    }

    printf("\nGrand total = %d\n", total);
    */
    #if Country == US || Country == UK
        #define Greeting "Hello."
    #elif Country == FR
        #define Greeting "Bonjour."
    #elif Country == GR
        #define Greeting "Guten Tag."
    #endif // Country

    printf("Greeting is: %s", Greeting);
    return 0;
}

