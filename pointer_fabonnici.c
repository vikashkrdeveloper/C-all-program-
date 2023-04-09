#include<stdio.h>
int fab(int *n){
  if(*n==1||*n==0)
{
    return *n;
}
else{
return fab(*n-1)+fab(*n-2);
}
}
int main()
{
     int num,n=0;
     int *p=&num;
     int *po=&n;
     printf("Enter the number\n");
     scanf("%d",p);
     for ( int i = 1; i <=*p; i++)
    {
     printf("%d",fab(*po));
   n++;
     }
     
return 0;
}