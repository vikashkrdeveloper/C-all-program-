#include<stdio.h>
#include<stdlib.h>

int main()
{
     int *p;
     int n;
     printf("How many integer");
     scanf("%d",&n);
     p= (int *) malloc(n*sizeof(int));
     for (int i = 0; i <n; i++)
     {
        printf("Enter The value of %d element",i );
       scanf("%d",&p[i]);
     }
     for (int i = 0; i <n; i++)
     {
        printf("The value of %d element is %d\n",i,p[i]);
      
     }
     
return 0;
}