#include <stdio.h>
#include <stdlib.h>

//! Register Storage Class

//!  register int x = 10; Error, esta clase solo puede emplearse den manera local.

int main()
{
    register int x; /// register variable (counter)

    for(x = 1; x <= 15; x++){
      printf("%d\n", x);
    }


    return 0;
}
