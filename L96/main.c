#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//! Challenge Macros

/*
    Challenge 1:
    Write a program to print the values of the following predefined symbolic constants
        __LINE__
        __FILE__
        __DATE__
        __TIME__
        __STDC__

    Challenge 2:
    Write a program that defines a macro that accepts two parameters and returns the
    sum of the given numbers.

    Challenge 3:
    Write a C program to find the square and cube of a number using macros.

    Challenge 4:
    Write a C program to check whether a character is uppercase or lowercase using macros.
*/


#define SUM(a, b) ((a) + (b))
//! Challenge #3
#define SQUARE(n) ((n) * (n))
#define CUBE(n) ((n) * (n) * (n))

//! Challenge #4
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')


int main()
{

    //! Challenge 1
    printf("The Macro __LINE__ returns an integer representing the current line were is called, this is the line: #%d \n", __LINE__);
    printf("The Macro __FILE__ returns a string whit the address of the file, this file is located at: #%s \n", __FILE__);
    printf("The Macro __DATE__ returns the current date in a string, today is: #%s \n", __DATE__);
    printf("The Macro __TIME__ returns the current time in a string in the 24 hours format, today is: #%s \n", __TIME__);
    printf("The Macro __STDC__ returns 1 if the compiler conforms to ISO Standard C, __STC__ = #%d \n", __STDC__);

    //! Challenge 2
    float a = 0, b = 0;
    printf("\nEnter 2 numbers: \n");
    scanf("%f %f", &a, &b);
    printf("%.3f + %.3f = %.3 f\n", a, b, SUM(a,b));

    //! Challenge 3
    int n = 0;
    printf("\nEnter a number: \n");
    scanf("%d", &n);
    printf("%d ^ 2 = %d\n", n, SQUARE(n));
    printf("%d ^ 3 = %d", n, CUBE(n));

    //! Challenge 4
    char c = '\0';
    printf("\nEnter a character: ");
    c = getchar();
    if (IS_UPPER(c)){
        printf("'%c' Is upper case\n", c);
    }else if(IS_LOWER(c)){
        printf("'%c' Is lower case\n", c);
    }else{
        printf("'%c' is not alphabet\n", c);
    }
    return 0;
}
