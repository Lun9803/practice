#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtol(str, &ptr, 10);
   printf("���֣��޷��ų��������� %ld\n", ret);
   printf("�ַ��������� |%s|", ptr);

   return(0);
}
