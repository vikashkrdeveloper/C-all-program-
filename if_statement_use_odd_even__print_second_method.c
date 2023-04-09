// even odd create second method
#include <stdio.h>

int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d", &num);
  if (num % 2 == 0)
  {
    printf("%d is even number\n", num);
  }
  if(num%2!=0)
  {
    printf("%d is odd number\n", num);
  }
  return 0;
}