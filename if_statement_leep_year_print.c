#include <stdio.h>

int main()
{
  int year;
  printf("Enter the year\n");
  scanf("%d", &year);
  if (year%4==0&&year%100||year%400==0)
  {
    printf("%d is leep year\n",year);
  }
  else
  {
    printf("%d is not leep year\n",year);
  }
  return 0;
}
