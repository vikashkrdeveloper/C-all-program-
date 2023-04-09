#include<stdio.h>
int mult();
int main()
{
     printf("Multiplication of two number = %d",mult());
return 0;
}
int mult(){
    int a,b;
    printf("Enter the a number\nEnter the b number\n");
    scanf("%d%d",&a,&b);
    return a*b;
     
}