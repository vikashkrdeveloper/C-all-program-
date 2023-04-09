#include<stdio.h>
#include<stdlib.h>

int main()
{
     float *p;
     p= (float *) calloc(6,sizeof(float));
     for (int i = 0; i <6; i++)
     {
        printf("Enter The value of %d element",i );
       scanf("%f",&p[i]);
     }
     for (int i = 0; i <6; i++)
     {
        printf("The value of %d element is %f\n",i,p[i]);
      
     }
     
return 0;
}