#include<stdio.h>

int main()
{
     int a,b,c;
     printf("Enter the value of a : \n");
     printf("Enter the value of b : \n");
     scanf("%d%d",&a,&b);
     printf("The value of a pre value : %d\n",a);
     c=b---a;
     printf("The value of c : %d\n",c);
     printf("The value of a upgraded value : %d\n",a);
     printf("The value of b upgraded value : %d\n",b);
     b=c---b;
     printf("The value of b post upgraded value : %d\n",b);
     printf("The value of c new upgraded value : %d\n",c);
     a=b-- - --a;
     printf("The value of a new  value : %d\n",a);
     printf("The value of b new upgraded value : %d\n",b);
     return 0;
}