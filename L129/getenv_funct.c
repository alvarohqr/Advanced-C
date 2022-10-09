#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//! General utilities part 3

/*
    getenv() searches for the environment string
    that is passed in.
    char *getenv(char const *NAME)
*/
int main()
{
    char *str = NULL;
    /* attempt to access environment variables using getenv()*/
    assert( (str = getenv("HOME")) != NULL);
    printf("Value of \"HOME Environment Variable\" : %s\n", str);

    assert( (str = getenv("PATH")) != NULL);
    printf("Value of \"PATH Environment Variable\" : %s\n", str);

    assert( (str = getenv("LOGNAME")) != NULL);
    printf("Value of \"LOGNAME Environment Variable\" : %s\n", str);

    return 0;
}

