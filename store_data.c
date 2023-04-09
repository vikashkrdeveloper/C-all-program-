#include<stdio.h>

int main()
{
     int i=5;
     int *j; 
     j=&i;
     printf("address of j : %u\n",&j);
     printf(" address of  i : %u\n",&i);
     printf(" Value of j : %u\n",*(&j));
     printf(" value of i : %u\n",*(&i));
     printf(" value of j : %d\n",*j);
     printf(" value of i : %d\n",i);
return 0;
}