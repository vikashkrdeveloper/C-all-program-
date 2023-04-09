#include<stdio.h>
#include <string.h>
struct book
{
    int page;
    float prices;
    char bookname[5];
};
void booo(struct book e){
    printf("%d\n",e.page);
    printf("%f\n",e.prices);
    printf("%s\n",e.bookname);

}
int main()
{
     struct book book;
     struct book *ptr;
     ptr=&book;
    //  (*ptr).page=100;
    ptr->page=100;
    ptr->prices=109.89;
    strcpy(ptr->bookname,"math");
     printf("%d",book);
     booo(book);
     return 0;
}