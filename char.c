#include<stdio.h>
#include<windows.h>

main()
{
    char c1,c2;
    c1=97;
    c2=99;
    printf("%c   %c\n", c1,c2);
    c1=c1-32;
    c2=c2-32;
    printf("%c   %c\n", c1,c2);
    system("pause");
}
