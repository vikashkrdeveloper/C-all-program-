#include<stdio.h>

int main()
{
      int arr[7]={45,78,98,56,67,23,54};
     printf("%d\n",arr[0]);
     printf("%d\n",arr[1]);
     printf("%d\n",arr[2]);
     printf("%d\n",arr[3]);
     printf("%d\n",arr[4]);
     printf("%d\n",arr[5]);
     printf("%d\n",arr[6]);
     printf("%d\n",&arr[6]);//This line is pointer
return 0;
}