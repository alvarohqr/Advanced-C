#include <stdio.h>


/*
fgetc(): is a file handling function that reads a char from a file
it moves the next file pointer positions to the next location to read the next character
ungetc(): useful when you don't know how many characters make up a data unit.
*/
/*
//int fgetc(FILE *fp);
int main(){
    FILE *fp = null;
    char c = '\0';

    fp = fopen("myFile.c", "r");

    if (fp == NULL){
        printf("Could not open file myFile.c");
        return 1;
    }

    printf("Reading the file myFile.c");

    while (1){
        c = fgetc(fp); //reading the file

        if (c == EOF){
            break;
            printf("%c",c)
        }
    }
    printf("Closing the file myFile.c");
    fclose(fp); //Closing the file
    return 0;
}
*/

//int ungetc( int ch, FILE* stream);

int main(){
    char ch = 0;
    while(isspace(ch = (char)getchar()));   //Read as long there are spaces
    ungetc(ch, stdin);                      //Put back the nonspace character

    printf("char is %c\n", getchar());
    return 0;
}
