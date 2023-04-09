#include<stdio.h>

int main()
{
     int i=67;
     int *j=&i;
    
     printf(" The address of  variable i : %u\n",&i);
     printf(" The address of  variable j : %u\n",&j);
     printf(" The value of  variable j : %d\n",j);
     printf(" The value of variable  i : %d\n",i);
return 0;
}