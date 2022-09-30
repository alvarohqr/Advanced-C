#include <stdio.h>
//#include <stdlib.h>

/*
Char input functions
getc(): enable you to read a single character from a file
    int getc(FILE *stream);
    returns a integer value associated with ASCII table
getchar(): a diferencia de getc, solo te deja leer desde stdin
*/


/*
int main()
{
    char ch = '\0';

    ch = getc(stdin);

    // Leyendo caracteres desde un archivo
    if (fp = fopen("someFile.c", "rw")){
        ch = getc(fp);
        while (ch != EOF){ // mientras no sea el final del archivo (End Of File)
            cj = get(fp);
        }
        fclose(fp);
    }
    return 0;
}
*/
/*
int main()
{
    char ch = '\0';

    ch = getc(stdin);
        //Leyendo desde la terminal
    printf("read in character %c\n", ch);


    return 0;
}
*/

/*
int main()
{
    char ch = '\0';
    //Usando getchar para leer desde la terminal
    printf("\n%c\n", getchar());

    return 0;
}
*/

int main()
{
    int ch = 0;

    while((ch = getchar()) != EOF){
        printf("%c\n", ch);
    }



    return 0;
}
