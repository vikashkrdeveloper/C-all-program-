#include<stdio.h>

int main()
{
     int num;
     int rem;
     int arr[50];
     int i=0;
     printf("Enter the decimal number");
     scanf("%d",&num);
     while (num!=0)
     {
       rem=num%2;
       num=num/2;
       arr[i]=rem;
      i++;
     }
     for ( int j = i-1; j>=0; j--)
     {
         printf("%d",arr[j]);
     }
     
return 0;
}