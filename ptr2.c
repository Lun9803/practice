#include<stdio.h>

int main()
{
    int n;
    int *pos;
    n = 2;
    pos = &n;
    printf("%d\n%d\n", n, pos);
    return 0;
}
