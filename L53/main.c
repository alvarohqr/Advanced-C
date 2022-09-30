#include <stdio.h>
#include <stdlib.h>

struct packed_struct{
    unsigned int :3;
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
    //! El operador ' : ' se emplea para especificar cuantos bits se
    //! le asigna a una variable, esta tecnica se conoce como padding.
    //! Los bit fields no pueden tener una dimensión, no pueden ser arrays ni tampoco obtener su direccion.

};

int main()
{
    struct packed_struct packed_data;

    packed_data.type = 7;


    return 0;
}
