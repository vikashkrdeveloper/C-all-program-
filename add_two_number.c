#include<stdio.h>
int add();
int main()
{
     printf("Division of two number = %d",add());
return 0;
}
int add(){
    int a,b;
    printf("Enter the a number\nEnter the b number\n");
    scanf("%d%d",&a,&b);
    return a+b;
     
}