#include<stdio.h>

int main()
{
    float r,p,y,ci,si;
    printf("enter the principle value\nenter the year\nenter the rate of interest\n");
    scanf("%f%f%f",&p,&y,&r);
    if ((ci= p*(1+r/100)*y)&&(si=(p*y*r)/100))
    {
        printf("%.2f\n",ci);
        printf("%.2f\n",si);
    }
return 0;
}