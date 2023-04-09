#include<stdio.h>
void pattern(int num,char a){
for (int i = 0; i<num ; i++)
     {
        for (int j =0; j <i; j++)
        {
           printf("%c",a-1);
        }
        a++;
        printf("\n");
     }
}
int main()
{
     int num;char ch='A';
     printf("Enter the number\n");
     scanf("%d",&num);
     pattern(num,ch);
     return 0;
}