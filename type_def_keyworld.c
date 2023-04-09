#include<stdio.h>
#include <string.h>
typedef struct book
{
    int page;
    float prices;
    char bookname[5];
}bok;
void booo(bok e){
    printf("%.0d\n",e.page);
    printf("%.2f\n",e.prices);
    printf("%s\n",e.bookname);

}
int main()
{
    bok book;
    bok *ptr=&book;  
 
    //  (*ptr).page=100;
    ptr->page=100;
    ptr->prices=109.89;
    strcpy(ptr->bookname,"math");
     printf("%d",book);
     booo(book);
     return 0;
}