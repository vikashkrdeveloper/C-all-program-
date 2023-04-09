#include<stdio.h>
void reverse(int arr[10]){
    int temp;
    for ( int i = 0; i <10; i++)
    {
    temp=arr[i];
    arr[i]=arr[10-1];
    arr[10-1]=temp; 
        printf("%d\n",arr[i]);
    }
    
}
int main()
{
     int arr[10]={3,4,5,7,8,9,5,4,3,7};
     reverse(arr);
return 0;
}