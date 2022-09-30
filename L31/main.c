#include <stdio.h>
#include <stdlib.h>

//! Variable length array

int main()
{
    size_t rows = 0;
    size_t columns = 0;

    prinf("Enter the number of rows and columns you want to store: ");
    scanf("%zd %zd", &rows, &columns);

    float values[rows][columns];

    printf("Hello world!\n");
    return 0;
}
