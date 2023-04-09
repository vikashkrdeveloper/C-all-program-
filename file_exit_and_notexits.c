#include<stdio.h>

int main()
{
     FILE *p;
     int num;
     char num1;
     p=fopen("basic.txt","r");
     if ( p==NULL)
     {
        printf("This file not exits");
     }
     else{
     fscanf(p,"%d\n",&num);
     printf("The value of num is %d\n",num);
     fscanf(p,"%d\n",&num1);
     printf("The value of num is %d\n",num1);
     fclose(p);
     }
return 0;
}