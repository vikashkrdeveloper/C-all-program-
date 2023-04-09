#include<stdio.h>
int areaoftriangular();
int main()
{
     printf("%d",areaoftriangular());
return 0;
}
int areaoftriangular(){
 int b, h,area;
    printf("enter the base\nenter the  hight \n");
    scanf("%d%d",&b,&h);
    return area=b*h;
}