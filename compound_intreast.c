#include<stdio.h>

int main()
{
    float r,p,y,ci;
    printf("enter the principle value\nenter the year\nenter the rate of interest\n");
    scanf("%f%f%f",&p,&y,&r);
    printf("%f",ci=p*(1+r/100)*y);
return 0;
}