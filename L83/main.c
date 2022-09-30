#include <stdio.h>
#include <stdlib.h>

/*
UNIONS
*/

union Data{

    int i;
    float f;
    char str[20];

}data;

union car{
    int i_value;
    float f_value;
    char c_value[40];
};
//++++++++++++++++++++++++++++++++++++++++++++++++++
struct owner{
    char socsecurity[12];
};

struct leasecompany{
    char name[40];
    char headquarters[40];
};
//! Anonymous Union
struct car_data{
    char make[15];
    int status;
    union{ //Anonymous union, unnamed member union of a structure or union
        struct owner owncar;
        struct leasecompany leasecar;
    };
};

int main()
{
    union car car1, car2, *car3; //Creating 3 unions

    printf("Size of Data Union: %zu\n", sizeof(data));
    printf("Size of Car Union: %zu\n", sizeof(car1));
    return 0;
}
