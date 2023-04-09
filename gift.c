#include<stdio.h>

int main()
{
     int num,sub;
     printf("Enter The marks\n");
     printf("Enter The marks1\n");
     scanf("%d %d",&num,&sub);
     if ((num>=80)&&(sub>=70))

     {
        printf("You passed two subject innam 50 rupes");
     }
     else if ( num>=60)
     {
        printf("You passed one subject  innam 25 rupes");
       
     }
      else  
     {
        printf("You passed number lower innam 15 rupes");
       
     }
     
return 0;
}