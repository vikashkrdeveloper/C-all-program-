#include <stdio.h>

int main()
{
    float bs, gs, da, hra;
    printf("Enter the salary\n");
    scanf("%f", &bs);
    if (bs < 1500)
    {
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
        gs = bs + hra + da;
        printf("gross salary : %f", gs);
    }
    else
    {
        hra = 500;
        da = bs * 98 / 100;
        gs = bs + hra + da;
        printf("gross salary : %f", gs);
    }
    return 0;
}