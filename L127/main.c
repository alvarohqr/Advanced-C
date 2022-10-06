#include <stdio.h>
#include <stdlib.h>
/*
//! General Utilities (stdlib.h)

//! exit() function: forces a program to terminate as if it executed normally.
FILE *openFile(const char *file){
    FILE *inFile;

    if( (inFile = fopen(file, "r")) == NULL){
        fprintf(stderr, "Can't open %s for reading.\n", file);
        exit(EXIT_FAILURE);
    }
    return inFile;
}
*/
//! atexit() function: allows you to specify particular functions to be called when exit() executes
//! takes as an argument a pointer to a function (the function name): int atexit(void(*function)(void));

void sing_off(void);
void too_bad(void);

int main(void){
    int n = 0;

    atexit(sing_off); // register the sign_off() function
    puts("Enter an integer: ");

    if(scanf("%d", &n) != 1){
        puts("That's not an integer!");
        atexit(too_bad); // register the too_bad() function
        exit(EXIT_FAILURE);
    }
    return 0;
}

void sing_off(void){
    puts("in sign_off...");
}

void too_bad(void){
    puts("in too_bad...");
}
