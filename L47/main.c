#include <stdio.h>
#include <stdlib.h>

//! Challenge Bitwise Operators

/*
Write a program that reads two integers from the user

Your program will print the result of applying:
    * the ~ operator to each number
    * the &, |, and ^ operators to the pair
    * the << and >> operators to a specific number
    * show the results as a binary strings (need to write DecimaltoBinary function)
*/

long long convertDecimalToBinary(int n);

int main()
{
    int x = 0, y = 0;
    int z_and = 0, z_or = 0, xcomp = 0, ycomp = 0;
    int xls = 0, xrs = 0, yls = 0, yrs = 0;
    int ls = 0, rs = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("\nEnter the number of bits right shift: \n");
    scanf("%d", &rs);
    printf("\nEnter the number of bits left shift: \n");
    scanf("%d", &ls);

    z_and = x & y;
    z_or = x | y;
    xcomp = ~(x);
    ycomp = ~(y);
    xls = x << ls; xrs = x >> rs;
    yls = y << ls; yrs = y >> rs;

    printf("The result of %d (%d) & %d (%d) = %d \n", x, convertDecimalToBinary(x), y, convertDecimalToBinary(y), convertDecimalToBinary(z_and));
    printf("The result of %d (%d) | %d (%d) = %d \n", x, convertDecimalToBinary(x), y, convertDecimalToBinary(y), convertDecimalToBinary(z_or));
    printf("The result of ~%d (%d) = %d \n", x, convertDecimalToBinary(x), convertDecimalToBinary(xcomp));
    printf("The result of ~%d (%d) = %d \n", y, convertDecimalToBinary(y), convertDecimalToBinary(ycomp));
    printf("The result of shifting %d (%d) %d bits to the right = %d \n", x, convertDecimalToBinary(x), rs, convertDecimalToBinary(xrs));
    printf("The result of shifting %d (%d) %d bits to the left = %d \n", x, convertDecimalToBinary(x), ls, convertDecimalToBinary(xls));
    printf("The result of shifting %d (%d) %d bits to the right = %d \n", y, convertDecimalToBinary(y), rs, convertDecimalToBinary(yrs));
    printf("The result of shifting %d (%d) %d bits to the left = %d \n", y, convertDecimalToBinary(y), ls, convertDecimalToBinary(yls));
    return 0;
}

long long convertDecimalToBinary(int n){
   long long binaryNumber = 0;
   int remainder, i=1;

   while(n != 0) {
     remainder = n%2;
     n = n / 2;
     binaryNumber += remainder * i;
     i = i * 10;
   }

   return binaryNumber;

}
