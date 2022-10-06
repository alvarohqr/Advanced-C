#include <stdio.h>
#include <limits.h>
#include <assert.h>

//! Assert library: used for debugging
//! static_assert(condition, output) if condition = false, abort the execution and prints a message

static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");

int main()
{
    puts("char is 16 bits.");
    return 0;
}

