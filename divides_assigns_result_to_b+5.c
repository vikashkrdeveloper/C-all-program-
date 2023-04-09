#include<stdio.h>

int main()
{
     int a,b;
     printf("Enter the number a\n");
     printf("Enter the number b\n");
     scanf("%d%d",&a,&b);
     a/=b+5;          //not applied associativity rules this condition applied bodmas rules
     printf("%d\n",a);
return 0;
}