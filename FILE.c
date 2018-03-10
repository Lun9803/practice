#include <stdio.h>

int main()
{
    FILE *f = fopen("file1.txt", "w");
    for (int i = 0; i < 9 ; i++){
        char ch = ('1' + i);
        fputc(ch, f);
        if((i + 1) % 3 != 0){
            fputc(' ', f);
        }
        else{
            fputc('\n', f);
        }
    }
    fclose(f);

    FILE *f2 = fopen("file1.txt", "r");

    if(!f2){
        printf("error!");
    }

    while(! feof(f2)){
        char ch = fgetc(f2);
        putchar(ch);
    }

    fclose(f2);

    return 0;
}
