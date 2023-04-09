#include<stdio.h>

int main()
{
     int n,arm,sum=0;
     printf("Enter the number ");
     scanf("%d",&n);
     arm=n;
     while (n!=0)
     {
        arm=n%10;
        sum=sum+arm*arm*arm;
        arm=n/10;
     }
     if(sum==n){
        printf("This number is armstrong number");
     }
     else{
        printf("not armstrong number");
     }
return 0;
}