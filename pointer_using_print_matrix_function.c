#include<stdio.h>
void matrix(int *arr[3][3]){
    for ( int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf("%d\t",*arr[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
     int arr[3][3];
     int *ptr=&arr;
     for ( int  i = 0; i <3; i++)
     {
        for ( int j = 0; j <3; j++)
        {
            printf("Enter the number is %d ",i);
            scanf("%d",ptr);
        }
        
     }
     
     matrix(arr);
return 0;
}