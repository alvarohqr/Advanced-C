#include <stdio.h>
#include <stdlib.h>
//! Function pointers


int somedisplay();

int main()
{
    int (*func_ptr)(); //Return type (*name of the function) (parameters)

    func_ptr = somedisplay;

    printf("Address of function somedisplay is %p\n", func_ptr);

    //! invoke
    (*func_ptr)();
    return 0;
}

int somedisplay(){
    printf("--Display some text");
}
