#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//! General utilities part 3

/*
    memcpy() and memmove() functions offer you almost the
    same convenience for other kinds of arrays.
    void *memcpy(void *restrict s1, const void *restrict s2, size_t n);

    memcpy is free to assume that there is no overlap between the 2 memory ranges
*/

#define SIZE 10
void show_array(const int ar[], int n);

static_assert(sizeof(double) == 2 * sizeof(int), "double not twice int size");

int main()
{
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[SIZE];
    double curious[SIZE/2] = {2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30};
    puts("memcpy() used: ");
    puts("values (original data): ");
    show_array(values, SIZE);
    memcpy(target, values, SIZE * sizeof(int));
    puts("target (copy of values)");
    show_array(target, SIZE);

    puts("\nUsing memmove() with overlapping ranges:");
    memmove(values + 2, values, SIZE /2 * sizeof(int));
    puts("values -- elements 0-5 copied to 2-7: ");
    show_array(values, SIZE);

    puts("\nUsing memcpy() to copy double to int: ");
    memcpy(target, curious, (SIZE/2) * sizeof(double));
    show_array(target, SIZE/2);
    show_array(target + 5, SIZE/2);

    return 0;
}

void show_array(const int ar[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
    putchar('\n');
}

