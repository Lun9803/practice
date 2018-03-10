#include<stdio.h>
#include<pthread.h>

pthread_mutex_t mylock = PTHREAD_MUTEX_INITIALIZER;

int n = 5;

void computeA(int i){

    if(pthread_mutex_lock(&mylock) != 0){
        perror("lock error");

    }
    n += i ;

    if(pthread_mutex_unlock(&mylock) != 0){
        perror("unlock error");

  }
}

void computeB(int i){

    if(pthread_mutex_lock(&mylock) != 0){
        perror("lock error");

    }
    n += i ;

   if(pthread_mutex_unlock(&mylock) != 0){
       perror("unlock error");
 }
}

int main(){

    pthread_t mythread[5];
    int arg[5] = {2,5,6,8,2};

    for(int i = 0; i < 5; i += 2){
        if(pthread_create(&mythread[i], NULL, (void *)computeA,(int *)arg[i]) != 0){
            perror("create error");
            return 1;
        }

    }

    for(int i = 1; i < 5; i += 2){
        if(pthread_create(&mythread[i], NULL, (void *)computeB,(int *)arg[i]) != 0){
            perror("create error");
            return 1;
        }

    }

    for(int i = 0; i < 5; i ++){
        if(pthread_join(mythread[i], NULL) != 0){
            perror("join error");
            return 1;
        }
    }

    printf("%d\n", n );

}
