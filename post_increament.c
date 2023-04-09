#include<stdio.h>

int main()
{
     int a,b;
     printf("Enter the value a\n");
     scanf("%d",&a);
     printf("The value of a pre : %d\n",a);
     b=a++;  //post increament operator
     printf("The value of b : %d\n",b);
     printf("The value of a post : %d\n",a);
     return 0;
}