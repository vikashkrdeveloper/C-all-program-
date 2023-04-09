#include<stdio.h>
void pattern(int num){
 for (int i =1; i <=num; i++)
     {
        for (int j =1; j <=num-i; j++)
        {
           printf(" ");
        }
        for (int k = 0; k!=2*i-1 ; k++)
        {
           printf("*");
        }
        
        printf("\n");
        }
}
int main()
{
     int num;int k=0;
     printf("Enter the number\n");
     scanf("%d",&num);
        pattern(num);
     
     return 0;
}