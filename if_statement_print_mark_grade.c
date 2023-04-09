#include <stdio.h>

int main()
{
    int mark;
    printf("Enter the age:\n");
    scanf("%d", &mark);
    if (mark >= 90)
    {

        printf("marks:%d grade A", mark);
    }
    else if (mark >= 80)
    {
        printf("marks :%d grade B", mark);
    }

    else if (mark >= 70)
    {
        printf("marks :%d grade C", mark);
    }
    else if (mark >= 60)
    {
        printf("marks :%d grade D", mark);
    }
    else if (mark >= 50)
    {
        printf("marks :%d grade E", mark);
    }
    else
    {
        printf("marks : %d fail", mark);
    }
    return 0;
}