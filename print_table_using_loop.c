#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
  int i=1;
  while ( i<=10)
    {
        printf("%d\n",i*num);
        i++;
    }
    return 0;
}