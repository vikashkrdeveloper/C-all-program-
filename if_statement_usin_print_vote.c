#include<stdio.h>

int main()
{
    int age;
     printf("Enter the age:\n");
     scanf("%d",&age);
     if(age>=18){
        printf("you can vote");
     }
     else{
        printf("you can not vote");
     }
return 0;
}