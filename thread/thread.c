#include <pthread.h>
#include <stdio.h>

#define threadsNum 4


void* printHello(void* arg){
	int argument = *((int*)arg);
    printf("Hello from thread %d\n", argument);
    return NULL;
}

int main(void){
    int args[threadsNum] = {1, 2, 3, 4};
    pthread_t threadIds[threadsNum];

    for(int i = 0; i < threadsNum; i++){
        if(pthread_create(threadIds + i, NULL, printHello, args + i) != 0){
            perror("unable to create thread");
            return 1;
        }
    }

    for(int i = 0; i < threadsNum; i++){
        if(pthread_join(threadIds[i],NULL) != 0){
            perror("unable to join thread");
            return 1;
        }
    }


}
