#include<stdio.h>
#include<math.h>
int main()
{    float a,b,c,sq,area;
     printf("Enter the side of triangle a\n");
     printf("Enter the side of triangle b\n");
     printf("Enter the side of triangle c\n");
     scanf("%f %f %f",&a,&b,&c);
     sq=(a+b+c)/2;
     area=sqrt(sq*(sq-a)*(sq-b)*(sq-c));
     printf("Area of Triangle : %f ",area);
return 0;
}