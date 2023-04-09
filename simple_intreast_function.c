#include<stdio.h>
float simpleintreast();
int main()
{
     printf("%.2f",simpleintreast());
return 0;
}
float simpleintreast(){
float r,p,y,si;
    printf("enter the principle value\nenter the year\nenter the rate of interest\n");
    scanf("%f%f%f",&p,&y,&r);
return si=(p*y*r)/100;
}