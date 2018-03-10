#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h;
	printf("Enter height: ");
	scanf("%d", &h);
	if(h < 2 || h > 20){
		printf("Invalid height.");
	}

	for(int i = 1; i <= h; i++){
		printL(i,h);
		printR(i,h);
	}
}

void printL(int i, int h){
	for(int n = 0; n < 2 * h - i; n++){
		printf(" ");
	}
	printf("/");
}

void printL(int i, int h){
	printf("/");
	for(int n = 0; n < 2 * h - i; n++){
		printf(" ");
	}
}
