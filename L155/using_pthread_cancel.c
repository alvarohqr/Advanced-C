
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>

void *thread_function(void *argument)
{
    printf("Hello World");
    pthread_cancel(pthread_self());
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t thread = NULL;

    pthread_create(&thread, NULL, thread_function, NULL);
    pthread_join(thread, NULL);

    return 0;
}
