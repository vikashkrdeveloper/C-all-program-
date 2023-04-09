#include<stdio.h>
int areaofrectangle();
int main()
{
     
 
  printf("%d", areaofrectangle());
return 0;
}
int areaofrectangle(){
     int l,w,area;
    printf("enter the length\nenter the wigth\n");
  scanf("%d%d",&l,&w);
  return area=l*w;
}