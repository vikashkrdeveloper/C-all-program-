#include<stdio.h>
float areaofcircual();
int main()
{
     
    printf("%f",areaofcircual());
return 0;
}
float areaofcircual(){
      float r,area;
    printf("enter the radius\n");
    scanf("%f",&r);
    return area=3.14*r*r;
}