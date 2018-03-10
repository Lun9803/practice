#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size = 1;
    int length = 0;

    printf("Enter numbers, e to end\n");
    int* numbers = malloc(sizeof(int) * size);
    if (!numbers){
        perror("unable to allocate");
        return 1;
    }

    int number;

    while(scanf(" %d", &number) == 1){
        if(length ==  size){
            size *= 2;
            numbers = realloc(numbers, sizeof(int) * size);
        }

        numbers[length] = number;
        length++;
    }

    for(int i = length - 1; i >= 0; --i){
        printf("%d ", numbers[i]);
    }

    free(numbers);
}
