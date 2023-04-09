#include<stdio.h>

int main()
{
    float r,p,y,si;
    printf("enter the principle value\nenter the year\nenter the rate of interest\n");
    scanf("%f%f%f",&p,&y,&r);
    printf("%f",si=(p*y*r)/100);
return 0;
}