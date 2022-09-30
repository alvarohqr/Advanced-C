#include <stdio.h>
#include <stdlib.h>

//! MACROS
#define PI 3.141596
#define CIRCLE_AREA(X) ((PI) * (X) * (X))

int main()
{
    float area = CIRCLE_AREA(4);
    printf("Area is: %.4f \n", area);
    return 0;
}
