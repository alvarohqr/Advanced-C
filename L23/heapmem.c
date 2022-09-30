#include <stdio.h>
#include <stdlib.h>

//!Ejemplo memoria heap

/*
    Conforme el programa se ejecuta agrega las variables
    al stack y cuando termina las saca. Ya sea en la
    función principal o secundarias.
    */

//Declarando la función
double *multiplyBytTwo(double *input);

int main()
{
    //Declarando y definiendo variables stack
    int *age = malloc(sizeof(int))
    *age = 30;
    double *salary = malloc(sizeof(double));
    *salary = 12345.67;
    double *myList[3] = malloc(3*sizeof(double));
    *myList[0] =  1.2;
    *myList[1] =  2.3;
    *myList[2] =  3.4;

    double *twicesalary = malloc(sizeof(double));

    printf("double your salary is %.3f\n", *twicesalary);

    free(age);
    free(salary);
    free(myList);
    free(twicesalary);

    return 0;
}

//Definiendo la función

double *multiplyBytTwo(double *input){
    double *twice = malloc(sizeof(double));
    *twice = *input * 2.0;
    return twice;
}
