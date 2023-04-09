#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
     int i = 1; 
     while(i<=100)
    {
        if ((i >= 1 && i <= 50))
        {

            printf("%d\n", i);
            i++;
        }
        else
        {
            printf("condition false");
            break;
        }
    }

    return 0;
}