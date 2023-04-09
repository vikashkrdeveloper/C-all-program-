#include<stdio.h>

int main()
{
    FILE *p;
      int num=456;
      p=fopen("vikash.txt","w");
      fPrintf(p,"This is address ",num);
      fPrintf(p,"Name :- vikash kumar ",num);
      fPrintf(p,"Collage:- Goverment Engineering Siwan",num);
      fPrintf(p,"Roll no:-22-CSE-24",num);
      fPrintf(p,"Branch:-CSE",num);
return 0;
}