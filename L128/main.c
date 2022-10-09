#include <stdio.h>
#include <stdlib.h>

//! General Utilities part 2

// int atoi(char const *s);
// long int atof(char const *s);
// double strtod(const char *str, char **str_end);
// long int strtol(char const *s, char **end, int base);

int main()
{
    char a[10] = "100";
    char b[10] = "33.121";
    char c[10] = "132134534";
    char d[] = "123.45abc", *end;
    char e[] = "123.45 7.7";
    char f[30] = "2033300 Prueba";
    char *ptr = NULL;
    long ret = 0;


    int value = atoi(a);
    float valuef =  atof(b);
    long valuel = atol(c);
    double valued = strtod(d, &end);
    double valued2 = strtod(e, &end);
    double valued3 = strtod(end, NULL);
    ret = strtol(f, &ptr, 10);

    printf("(str to int) Value = %d\n", value);
    printf("(str to f) Value = %.4f\n", valuef);
    printf("(str to l) Value = %ld\n", valuel);
    printf("(str to d) Value = %lf\n", valued);
    printf("(str lf) Values = %lf, %lf\n", valued2, valued3);
    printf("The number (unsigned long integer) is %ld\n", ret);
    printf("String part is [%s]\n", ptr);

    //! int to str
    sprintf(a, "%d",  50);
    printf("Value = %s\n",a);

    // random generator
    srand(time()); //Setting the seed so each call new random numbers will be generated
    printf("\nRandom values:\n");
    for (int i = 0; i < 5; i++){
        printf("%d\n", rand());
        //printf("%d\n", rand() % 5 + 1); // random # 1-5
    }

    return 0;
}
