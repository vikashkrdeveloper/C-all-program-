#include<stdio.h>

int main()
{
     int arr[10]={3,4,5,6,7,8,9,2,1,7};
     int *ptr=arr;
     for(int i=0;i<10;i++){

     printf("%d\n",*ptr+(arr[i]));
     }
return 0;
}