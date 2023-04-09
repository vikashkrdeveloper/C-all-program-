#include<stdio.h>
#include<string.h>
int main()
{
     struct book{
        int page;
        float prices;
        char bookname[5];
     }e1;
      e1;
     e1.page = 100;
     e1.prices = 300.09;
     strcpy(e1.bookname,"math\nchemistry\nphysics");
     printf("%d\n",e1.page);
     printf("%f\n",e1.prices);
     printf("%s\n",e1.bookname);
return 0;
}