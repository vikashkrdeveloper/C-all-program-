#include<stdio.h>
int sub();
int main()
{
     printf("Substrication of two number = %d",sub());
return 0;
}
int sub(){
    int a,b;
    printf("Enter the a number\nEnter the b number\n");
    scanf("%d%d",&a,&b);
    return a-b;
     
}