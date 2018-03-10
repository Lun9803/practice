#include<stdio.h>

void encrypt();
void decrypt();

int main(){

    printf("encrypt : 1, decrypt: 2\n");
    int command;

    scanf("%d", &command);
    if(command != 1 && command != 2){
        printf("enter again\n");
    }

    if(command == 1){
        encrypt();
    }

    if(command == 2){
        decrypt();
    }

}


void encrypt(){

    printf("enter the input file name\n");
    char input[25];
    scanf("%s", input);

    printf("enter the output file name\n");
    char output[25];
    scanf("%s", output);

    FILE* inputFile = fopen(input, "r");

    if(!inputFile){
        printf("wrong input file name!\n");
        return;
    }

    char str[100];

    int i = 0;
    while( !feof(inputFile)){
        char ch = fgetc(inputFile);
        if(ch != ' '){
            ch -= 50;
            str[i] = ch;
        }
        else{
            str[i] = ' ';
        }
        i++;
    }
    close(inputFile);

    FILE* outputFile = fopen(output, "w");

    i = 0;

    while(str[i] != NULL){
        fputc(str[i], outputFile);
        i++;
    }
    close(outputFile);

    printf("successfully encrypted!\n");

}

void decrypt(){

    printf("enter file name\n");
    char input[25];
    scanf("%s", input);

    FILE* file = fopen(input, "r");

    if(!file){
        printf("wrong file name\n");
        return;
    }

    while(! feof(file)){
        char ch = fgetc(file);
        if(ch != ' '){
            ch += 50;
            putchar(ch);
        }
        else{
            putchar(' ');
        }

    }

    close(file);

}
