#include <stdio.h>
#include <stdlib.h>

/*
SECTION 10, CHALLENGE 1
    Write a program in C to count the number of words and characters in a file OR from stdin
    This program can take zero command-line arguments or one command-line argument.
        If there is one argument, it is interpreted as the name of a file.
        If there is no argument, the stdin is to be used for input.
*/

int main(int argc, char * argv[]){
    FILE *fp = NULL;
    char ch= '\0';
    int wrd = 1, charctr = 1;

    if (argc == 1){
        fp = stdin;
    }else if (argc == 2){
        if ((fp = fopen(argv[1],"r")) == NULL){
                fprintf(stderr, "Can't open %s\n",argv[1]);
                exit(EXIT_FAILURE);
        }
    }else{
        fprintf(stderr, "Usage: %s [filename]\n", argv[1]);
    }

    ch = getc(fp);

    while(ch != EOF){
        if( ch == ' ' || ch == '\n'){
            wrd++;
        }
        else{
            charctr++;
        }
        ch = getc(fp);
    }

    printf("# words: %d\n", wrd);
    printf("# characters: %d\n",charctr);

    fclose(fp);

    return 0;
}
