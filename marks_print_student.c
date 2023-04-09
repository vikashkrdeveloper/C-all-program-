#include<stdio.h>

int main()
{
     int subject1=3;
     int subject2=5;
     int arr[3][5];
     for (int i = 0; i <subject1; i++)
     {
     for (int j = 0; j <subject2; j++)
     {
         printf("Enter the number %d ",i);
         scanf("%d",&arr[i][j]);
     }
     
     }
     for (int i = 0; i <subject1; i++)
     {
     for (int j = 0; j <subject2; j++)
     {
         printf("Enter the number %d is %d \n ",i,arr[i][j]);
        
     }
     
     }
     

return 0;
}