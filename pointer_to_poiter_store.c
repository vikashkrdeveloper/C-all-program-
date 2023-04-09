#include<stdio.h>

int main()
{
     int i=5;
     int *j=&i; 
     int **k=&j;
     int ***l=&k;
     printf("address of j : %u\n",&j);
     printf("address of  k : %u\n",&k);
     printf("address of  l : %u\n",&l);
     printf("value of j : %u\n",j);
     printf("value of k : %u\n",k);
     printf("value of l : %u\n",l);
 
return 0;
}