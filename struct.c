#include<stdio.h>

struct date
{
        char day[15];
        int month;
        int year ;
};
struct date deadline = {"Monday",11, 2000};

int main(){
        printf("%d\n", deadline.month);
        printf("%d", deadline.year);
        return 0;
}


