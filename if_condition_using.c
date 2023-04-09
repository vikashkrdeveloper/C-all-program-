#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int i=1;
    do
    {
        if ((num >= 2 && num <= 20))
        {

            printf("%d\n", i * num);
            i++;
        }
        else
        {
            printf("condition false");
            break;
        }
    }while (i<=10);
   
    

    return 0;
}