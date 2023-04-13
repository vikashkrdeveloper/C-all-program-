#include <stdio.h>

int main()
{
    int i, j, count = 0;
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d\n", i);
        count = 0;
    }
}