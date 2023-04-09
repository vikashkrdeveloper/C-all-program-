#include<stdio.h>

int main()
{
    int cost, seller;
     printf("Enter the cost price:\nEnter the seller price:\n");
     scanf("%d%d",&cost,&seller);
     if(seller>=cost){
        printf("profit : %d" ,seller-cost);
     }
     else if(seller==cost){
        printf("no profit no loss : %d ",seller-cost);
      
     }
     else{
        printf("loss : %d ",seller-cost);
     }
return 0;
}