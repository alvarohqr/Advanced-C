#include <stdio.h>
#include <stdlib.h>

//!Ejemplo memoria stack

/*
    Conforme el programa se ejecuta agrega las variables
    al stack y cuando termina las saca. Ya sea en la
    función principal o secundarias.
    */

//Declarando la función
double multiplyBytTwo(double input);

int main()
{
    //Declarando y definiendo variables stack

    int age = 30;
    double salary = 12345.67;
    double myList[3] = {1.2, 2.3, 3.4};

    printf("double your salary is %.3f\n", multiplyBytTwo(salary));

    return 0;
}

//Definiendo la función

double multiplyBytTwo(double input){
    double twice = input * 2.0;
    return twice;
}
