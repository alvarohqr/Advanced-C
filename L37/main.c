#include <stdio.h>
#include <stdlib.h>

int main()
{
    //! Designated initializers
    //! el operador ... indica el rango
    int nums[100] = {[1 ... 10] = 10, 2, 4, [13 ... 50] = 15, [60] = 2, [98] = 98};
    for(int i = 0; i<100; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}
