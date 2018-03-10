#include <stdio.h>

int strlen(const char* s){
    int count = 0;
    char* ptr = s;
    while(*ptr != '\0'){
        count++;
    }
    return count;

}


int main(void){

    printf("%d\n", strlen(""));
    printf("%d\n", strlen("123"));
    printf("%d\n", strlen("lorem ipsum\n"));

}
