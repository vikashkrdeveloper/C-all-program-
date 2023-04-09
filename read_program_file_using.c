#include<stdio.h>

int main()
{
FILE *ptr;
int a,b,c;
ptr=fopen("readprogremfile.txt","r");
fscanf(ptr,"%d %d %d",&a,&b,&c);
printf("The value of a b and c is %d %d %d ",a,b,c);
return 0;
}