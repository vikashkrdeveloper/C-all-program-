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
    struct book arr[10];
    for (int i = 0; i <10; i++)
    {
         printf("Enter the page number\n");
        scanf("%d",&arr[i]);}
        for ( int j = 0; j <10; j++){
         printf("Enter the amount number\n");
        scanf("%f",&arr[j]);}
        for ( int k = 0; k <10; k++){
         printf("Enter the book name\n");
        scanf("%s",&arr[k]);}
        for ( int i = 0; i <10; i++)
        {
            printf("book page number:%d\n",arr[i]);
        }
        for ( int j = 0; j <10; j++)
        {
            printf("book prices number:%f\n",arr[j]);
        }
        for ( int k = 0; k <10; k++)
        {
            printf("book name :%s\n",arr[k]);
        }
        
    return 0;
}