#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        for (int num = 2; num <= 20; num++)
        {
            if ((num >= 2 && num<= 10))
            {

                printf("\t%d", i * num);
            }
            else
            {
                printf("\tcondition false");
                break;
            }
        }
        printf("\n");
    }

    return 0;
}