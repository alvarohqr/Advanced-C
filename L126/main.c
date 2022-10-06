#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//! Assert library: used for debugging
//! assert(condition) if condition = false, abort the execution

int main()
{
    int y = 5;

    for (int x = 0; x < 20; x++){
        printf("x = %d, y = %d\n", x, y);
        assert(x < y);
    }
    return 0;
}
