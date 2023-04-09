#include<stdio.h>

int main()
{
     int a,b;
     printf("Enter the number a\n");
     printf("Enter the number b\n");
     scanf("%d%d",&a,&b);
     a=a/b+5;          //associativity rules applied
     printf("%d\n",a);
     a=a/(b+5);     //bodmas rules applied
     printf("%d\n",a);
return 0;
}