#include<stdio.h>
#include<windows.h>

main()
{
    printf("please enter two int numbers\n");
    int a,b;
    scanf("%d,%d",&a,&b);
    divide(a,b);
}

void divide(x,y)
{
    printf("%d divides %d = %d......%d ", x, y, x/y, x%y);
}
