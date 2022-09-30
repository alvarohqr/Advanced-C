#include <stdio.h>
#include <stdlib.h>

/*
OR: sets number 1 in flags to 1 and leaves all other bits unchanged
AND: mask has only the 1 bit set, is all 0s except for bit 1, ~(mask) is all 1 except for 1 bit
XOR: used to toggle a bit.
Checking values: if((flags & mask) == mask) tells if a bit 1 set to 1
*/

int main()
{
    int flags, mask;
    flags = 15; //! 0000 1111
    mask = 182; //! 1011 0000

    flags |= mask;  //! 1011 1111
    //flags &= ~(mask);    //0000 1001
    //flags ^= mask;    // 1011 1001

    return 0;
}
