#include <stdio.h>
#include <stdlib.h>

//L25 pt2.
//! extern function



/*

extern int count;

//Se toma como arg un valor externo
void write_extern(void){
    printf("count is %d\n", count);
}
*/

int count;
extern void write_extern();

int main()
{
    count = 10;
    write_extern();
    return 0;
}
