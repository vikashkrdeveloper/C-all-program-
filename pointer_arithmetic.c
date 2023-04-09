#include<stdio.h>

int main()
{
     int i=35;
     int q=-34;
     int *z=&q;
     int*p=&i;
     printf("The value of %u\n",z);
     printf("The value of %u\n",*z);//output value is garbage because %u is unsigned intiger 
     printf("The value of %d\n",*z);
     printf("The value of %u\n",p);
     printf("The value of %d\n",*p);
     p++;
     printf("The value of %u",p);
return 0;
}
