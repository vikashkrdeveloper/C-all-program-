#include<stdio.h>
#include<stdlib.h>

int main()
{
     int *p;
     int n;
     printf("Enter the table\n");
     scanf("%d",&n);
     p= (int *) malloc(10*sizeof(int));
     for (int i = 0; i <10; i++)
     {
        p[i]=n*(i+1);
        printf(" The table of %d X %d = %d\n",n,i+1,p[i]);
      
     }
return 0;
}