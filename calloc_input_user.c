#include<stdio.h>
#include<stdlib.h>

int main()
{
     float *p;
     int n;
     printf("How many integer");
     scanf("%d",&n);
     p= (float *) calloc(n,sizeof(float));
     for (int i = 0; i <n; i++)
     {
        printf("Enter The value of %d element",i );
       scanf("%f",&p[i]);
     }
     for (int i = 0; i <n; i++)
     {
        printf("The value of %d element is %f\n",i,p[i]);
      
     }
     
return 0;
}