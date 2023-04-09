#include<stdio.h>

int main()
{
   FILE *p;
   p=fopen("basic.txt","r");
   p=fopen("basic3.txt","w");
   printf("%s",p);
return 0;
}