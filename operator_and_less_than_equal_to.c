#include<stdio.h>

int main()
{
    int a,b,c;
     printf("Enter the value a\n");
     printf("Enter the value b\n");
     printf("Enter the value c\n");
     scanf("%d%d%d",&a,&b,&c);
     printf("%d", (a<=b)&&(b<=c) );
return 0;
}