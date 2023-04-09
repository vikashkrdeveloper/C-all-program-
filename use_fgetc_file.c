#include<stdio.h>

int main()
{
     FILE *p;
     p=fopen("basic.txt","r");
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     printf("The value of my cratater is %c\n",fgetc(p));
     fclose(p);
return 0;
}