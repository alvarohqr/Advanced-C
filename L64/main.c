#include <stdio.h>

/*
Output functions

putc(): enables you to write a single character to a file (or stdout)
    takes two arguments:
        the first argument is the character that is to be written into the file
        the second argument is the FILE pointer that identifies the file from
        wich the character is to be written to

*/

//int putc(int char, FILE *fp);

/*
int main()
{

    char ch = '\0';
    FILE *fp = NULL;

    if (fp = fopen("someFile.c", "rw")){

        ch = getc(fp);
        while (ch!= EOF){
            putc(ch, fp);
            cb = getc(fp);
        }
        fclose(fp);

        return 1;
    }

    return 0;
}
*/

//int putchar(int c);
/*
int main(){
    char string[] = "Hola mundo, \n sep";

    int i = 0;

    while (string[i] != '\0'){
        if (string[i] != '\n'){
            putchar(string[i]);
        }
        i++;
    }
    return 1;
}
*/

//Simulando concatenacion
/*
int main(){
    int ch = 0;

    while((ch = getchar())!= EOF){
        putchar(ch);
    }
    ungetc(ch, stdin);

    printf("\nGracias");
}
*/

//int fputc(int character, FILE *stream);

int main(){
    FILE *pFile;

    char c;

    pFIle = fopen("myFile.txt","w");
    if (pFile != NULL){
        for (c = 'A'; c <= 'Z'; c++){
            fputc(c, pFile);
            //fputc(c, stdout);
        }
        fclose(pFile);
    }
    return 0;
}
