#include<stdio.h>

int main()
{
     int n[10];
     for(int i=0; i<=10; i++){
     printf("Enter the number\n");
     scanf("%d",&n[i]);
     }
     for (int i = 0; i <10; i++)
     {
        printf("marks [%d] is  %d\n",i,n[i]);
     }
     
return 0;
}