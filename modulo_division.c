#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the a number\nenter the b number\n");
    scanf("%d%d",&a,&b);
    printf(" remander %d",c=a%b);//(invalid expression a%b)
    return 0;
}