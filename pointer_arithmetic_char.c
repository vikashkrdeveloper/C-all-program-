#include<stdio.h>

int main()
{
     char i=35;
     char q=-34;
     char *z=&q;
     char*p=&i;
     printf("The value of %u\n",z);
     printf("The value of %u\n",*z);//output value is garbage because %u is unsigned intiger 
     printf("The value of %d\n",*z);
     printf("The value of %u\n",p);
     printf("The value of %d\n",*p);
     p++;
     printf("The value of %u",p);
return 0;
}