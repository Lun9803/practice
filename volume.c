#include<stdio.h>
#include<windows.h>

main()
{
    int x,y,z,v;
    printf("please enter the length of 3 the sides\n");
    scanf("%d,%d,%d",&x,&y,&z);
    v = volume(x,y,z);
    printf("v = %d", v);
    system("pause");
}

int volume(a,b,c)
{
    return(a*b*c);
}
