#include<stdio.h>
#include<stdlib.h>

int main()
{
     int *p;
     p= (int *) malloc(6*sizeof(int));
     for (int i = 0; i <6; i++)
     {
        printf("Enter The value of %d element",i );
       scanf("%d",&p[i]);
     }
     for (int i = 0; i <6; i++)
     {
        printf("The value of %d element is %d\n",i,p[i]);
      
     }
     
return 0;
}

