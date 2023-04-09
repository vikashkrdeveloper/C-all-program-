#include<stdio.h>

int main()
{
     int arr[7];
     for ( int i = 0; i < 7; i++)
     {
          printf("The value of marks of student %d \n",i+1);
  scanf("%d",&arr[i]);
     }
     for ( int i = 0; i < 7; i++)
     {
          printf(" The value of marks for student %d is  %d \n",i+1,arr[i]);
 
     }
     
return 0;
}