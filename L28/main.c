#include <stdio.h>
#include <stdlib.h>


/*
Challenge 1
Write a small program that declares the following
variables
    * an int var with block scope and temporary storage
    * a global double var that is only accesible inside this file
    * a global float var that is accesible within the entire program
    * a float local var with permanent storage
    * a register int variable
    * a function that is only accesible with the file it is defined

Challenge 2
Write a program that finds the sum of various numbers
You cannot pass any variable representing the running total to the sum() function

Challenge 3
Create a c program that shares variables amongst two files
Inside main.c
    * include a global var used as a loop counter to iterate 5 times
    * inside the loop a function shoulb de invoked (display) that is
    defined in another file
    * the display function should not take parameters
Inside display.c
    * the display function is defined
    * displays the global variable in main.c incremented by 1
*/


//! Challenge 1
static double var2;     //! a global double var that is only accesible inside this file (static type)
float var3;             //! a global float var that is accesible within the entire program
static int return3();   //! a function that is only accesible with the file it is defined

//! Challenge 2
int sum(int a);


//! Challenge 3
int a;

int main()
{
    //! Challenge 1
    auto int var1;      //! an int var with block scope and temporary storage (auto type)
    static float var4;  //! a float local var with permanent storage (static type)
    register int var5; //! a register int variable

    printf("%d\n", return3());

    //! Challenge 2
    printf("%d ", sum(25));
    printf("%d ", sum(15));
    printf("%d \n", sum(30));


    //! Challenge 3

    for (a = 0; a<5; a++){
        display();
    }

    return 0;
}

static int return3(){
    return 3;
}

int sum(int a){
    static int suma = 0;
    suma += a;
    return suma;

}
