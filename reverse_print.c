#include<stdio.h>

int main()
{
     int num,a,b,c,d,e,total;
     printf("Enter the any five digit number\n");
     scanf("%d",&num);
     a=num%10;
     num=num/10;
     b=num%10;
     num=num/10;
     c=num%10;
     num=num/10;
     d=num%10;
     num=num/10;
     e=num%10;
     num=num/10;
     total=a*10000+b*1000+c*100+d*10+e;
    printf("%d",total);
return 0;
}