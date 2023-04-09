#include<stdio.h>
void pattern(int num){
     for (int i = 0; i <num; i++)
     {
        for (int j =0; j <num-i; j++)
        {
           printf("*");}
        for (int j =0; j <num; j++)
        {
           printf("*");
        }
        printf("\n");
     }
}
int main()
{
     int num;
     printf("Enter the number\n");
     scanf("%d",&num);
pattern(num);
     
     return 0;
}