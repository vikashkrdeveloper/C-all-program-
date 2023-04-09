#include<stdio.h>
#include <string.h>
struct book
{
    int page;
    float prices;
    char bookname[5];
}book,*ptr;
int main()
{
     
     ptr=&book;
    //  (*ptr).page=100;
    ptr->page=100;
     printf("%d",book);
     return 0;
}