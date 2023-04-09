#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        if ((num >= 2 && num <= 20))
        {

            printf("%d\n", i * num);
        }
        else
        {
            printf("condition false");
            break;
        }
    }

    return 0;
}