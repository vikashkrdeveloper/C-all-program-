#include<stdio.h>
void cardrive();
int main()
{
    
return 0;
}
void cardrive(){
  int car;
     printf("Enter the age:\n");
     scanf("%d",&car);
     if(car>=18&&car<=70){
        printf("you can drive");
     }
     else{
        printf("you can not drive");
     }
 
}