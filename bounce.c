#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	int startPos = atoi(argv[2]);
	int iterations = atoi(argv[3]);
	char *str[] = {argv[1]};
    if(argc != 4){
		printf("Invalid arguments length");
	}
	if(startPos < 0 || startPos >= sizeof(argv[1])){
		printf("Invalid start position");
	}
	if(iterations < 0){
		printf("Invalid iteration count");
	}
	printf("%s", str);






	return 0;
}
