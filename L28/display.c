#include <stdio.h>

//! Uso de variables externas


extern int a; //Variable local, se declara normal

void display(void){
    printf("%d\n",a+1); //No usar operadores de asignación como a++ o ++a
}
