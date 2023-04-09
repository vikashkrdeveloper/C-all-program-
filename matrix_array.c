#include<stdio.h>

int main()
{
     int arr[4][4];
     for ( int i = 1; i <=4; i++)
     {
         for (int j =1; j <=4; j++)
         {
          printf("Enter the matrix [%d]",i);
          scanf("%d",&arr[i][j]);
         }
         
     }
       for ( int i = 1; i <=4; i++)
     {
         for (int j =1; j <=4; j++)
         {
          printf(" %d\t",arr[i][j]);
         }
         printf("\n");
     }
     
return 0;
}