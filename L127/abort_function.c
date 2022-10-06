#include <stdio.h>
#include <stdlib.h>

//! General Utilities (stdlib.h)


//! abort() causes abnormal program termination
    // raises the SIGABRT signal


int main(void){

    FILE *fp;

    fp = fopen("somefile.txt", "r");

    if(fp == NULL){
        printf("Going to abort the program\n");
        abort();
    }

    printf("Going to close the file\n");
    fclose(fp);

    return 0;
}


