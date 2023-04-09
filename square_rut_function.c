#include <stdio.h>
int squareroot();
int main()
{
    printf("%d", squareroot());
    return 0;
}
int squareroot()
{
    int a;
    printf("enter the number ");
    scanf("%d", &a);
    return a * a;
}