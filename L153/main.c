#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * hello_fun()
{
    puts("Hello, World!");
    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t this_thread;
    pthread_create(&this_thread, NULL, hello_fun, NULL);
    pthread_join(this_thread, NULL);
    pthread_exit(NULL);

    return 0;
}
