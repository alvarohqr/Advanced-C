#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//! General utilities part 3

/*
    system() pases the command name or program name specified
    as an argument to host the environment, allows you to
    execute programs on the console/shell
*/
int main()
{
    char command[50];

    //strcpy(command, "ls -l"); // list the elements in the source file
    strcpy(command, "pwd"); // displays the current directori
    system(command);
    return 0;
}
