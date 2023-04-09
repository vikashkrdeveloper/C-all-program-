#include <stdio.h>
#include <string.h>
struct book
{
    int page;
    float prices;
    char bookname[5];
};
int main()
{
struct book book;
printf("Enter the page number\n");
 scanf("%d",&book.page);
 printf("Enter the prices number\n");
 scanf("%f",&book.prices);
 printf("Enter the book name number\n");
scanf("%s",book.bookname); 
 printf("book page number: %d \n",book.page);
 printf("book prices: %f\n",book.prices);
 printf("book name:%s\n",book.bookname);
    return 0;
}