#include<stdio.h>
void swap(int *arr,int n){
    int temp;
    for(int i=0; i<(n/2); i++){
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
    }
}
int main()
{
   int arr[]={56,3,2,54,78};
swap(arr,5);
    for(int i=0; i<5; i++){
 printf("The value of %d element is %d\n",i,arr[i]);
    }
     
return 0;
}