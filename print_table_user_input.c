#include<stdio.h>

int main()
{
     int arr[10];
     int n;
     printf("Enter the table\t");
     scanf("%d",&n);
     for ( int i = 0; i<10; i++)
     {
       arr[i]=n+n*(i)  ;
          }
         for ( int i = 0; i<10; i++)
     {
        printf("%d\n",arr[i]);
          }
     
return 0;
}