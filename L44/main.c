#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}

int convertBinaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)    {   //Mientras no se pase del 1er elemento
        remainder = n%10; //Se usa el operador modulo para obtener el ultimo digito
        n /= 10;    //Se avanza al siguiente digito
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
