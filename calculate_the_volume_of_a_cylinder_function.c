#include<stdio.h>
float volumeofcylander();
int main()
{
     printf("%.2f",volumeofcylander());
return 0;
}
float volumeofcylander(){
    float r,h,cyli;
    printf("enter the radius\nenter the height\n");
    scanf("%f%f",&r,&h);
    return cyli=(3.14*r*r*h);
}