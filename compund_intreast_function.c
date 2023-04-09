#include<stdio.h>
float compundintreast();
int main()
{
     printf("%.2f",compundintreast());
return 0;
}
float compundintreast(){
float r,p,y,ci;
    printf("enter the principle value\nenter the year\nenter the rate of interest\n");
    scanf("%f%f%f",&p,&y,&r);
return ci=p*(1+r/100)*y;
}