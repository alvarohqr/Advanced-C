#include <stdio.h>
#include <stdlib.h>

/*
Challenge (using goto)

Write a program that uses goto statements to simulate a nested
looping structure that prints a triangle of asterisks


    *
   * *
  *   *
 *     *
*********

*/

int main() {
    int value = 18;
    int i = 1, j, k= 0;

    outerLoop:
        if (i < value) {
           j = i;

           innerLoop:
              if (j < value) {
                printf(" ");
                j++;
                goto innerLoop;
              }
              else {
                 innerLoop2:
                    if (k != ((2 * i)))  {
                        if (k == 0 || k == (2 * i) - 3) {
                             printf("*");
                        }
                        printf(" ");
                        k++;
                        goto innerLoop2;
                    }

                    k = 0;
                    printf("\n");
                    i++;
                    goto outerLoop;
              }
        }
        else {
           i = 0;
           loop:
             if (i < (2 * value) - 1) {
               printf("*");
               i++;
               goto loop;
             }
        }

    return 0;
}
