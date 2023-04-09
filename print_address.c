#include<stdio.h>

int main()
{
     int arr[4][5][6];
     for (int i = 0; i <4; i++)
     {
         for (int j = 0; j <5; j++)
         {
            for (int k = 0; k <6; k++)
            {
             printf("[%d][%d][%d],%u\n",i,j,k,&arr[i][j][k]);
            }
            
         }
         
     }
     
return 0;
}