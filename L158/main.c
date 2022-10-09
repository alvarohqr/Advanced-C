#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//! Threads conditional variables

pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t condition_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condition_cond = PTHREAD_COND_INITIALIZER;

void *functCount1();
void *functCount2();

int count = 0;

#define COUNT_DONE 10
#define COUNT_HALT1 3
#define COUNT_HALT2 6

int main()
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, &functCount1, NULL);
    pthread_create(&t2, NULL, &functCount2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}

void *functCount1(){
    for(;;){
        pthread_mutex_lock(&condition_mutex);

        while( count >= COUNT_HALT1 && count <= COUNT_HALT2){
            pthread_cond_wait(&condition_cond, &condition_mutex);
        }

        pthread_mutex_unlock(&condition_mutex);

        pthread_mutex_lock(&count_mutex);
        count++;

        printf("Counter value functCount1: %d\n", count);
        pthread_mutex_unlock(&count_mutex);

        if(count >= COUNT_DONE) return (NULL);
    }
}

void *functCount2(){
    for(;;){
        pthread_mutex_lock(&condition_mutex);

        if( count >= COUNT_HALT1 || count <= COUNT_HALT2){
            pthread_cond_signal(&condition_cond);
        }

        pthread_mutex_unlock(&condition_mutex);

        pthread_mutex_lock(&count_mutex);
        count++;

        printf("Counter value functCount2: %d\n", count);
        pthread_mutex_unlock(&count_mutex);

        if(count >= COUNT_DONE) return (NULL);
    }
}
