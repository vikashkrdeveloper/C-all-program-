#include<stdio.h>
 void patterna(int num){
    for (int i = 0; i <num; i++)
     {
        for (int j =0; j <i; j++)
        {
           printf("%d",j+1);
        }
        printf("\n");
     }
}
 void patternb(int num){
    for (int i = 0; i <num; i++)
     {
        for (int j =0; j <i; j++)
        {
           printf("*");
        }
        printf("\n");
     }
}
void patternc(int num,char a){
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
void patternd(int num){
      for (int i =num; i >=0; i--)
     {
        for (int j =i; j >=0; j--)
        {
           printf("%d",j+1);
        }
        printf("\n");
     }
}
void patterne(int num){
     for (int i = num; i >0; i--)
     {
        for (int j =i; j >0; j--)
        {
           printf("*");
        }
        printf("\n");
     }
}
void patternf(int num){
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
     int num,n;
     char ch='A';
     printf("chosses any number case\n");
     scanf("%d",&num);
     printf("Enter the number \n");
     scanf("%d",&n);
     switch (num)
     {
     case 1:
      patterna(n);
        break;
     case 2:
      patternb(n);
        break;
     case 3:
      patternc(n,ch);
        break;
     case 4:
      patternd(n);
        break;
     case 5:
      patterne(n);
        break;
     case 6:
      patternf(n);
        break;
     default:
     printf("not case number please enter 1 to 6 number\n");
        break;
     }
     return 0;
}