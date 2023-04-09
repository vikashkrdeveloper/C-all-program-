#include<stdio.h>

int main()
{
     int marks[5];
int *m=&marks[0];
for (int i = 0; i <5; i++)
{
  printf("Enter the marks student %d ",i);
  scanf("%d",m);
  m++;
}
for (int i = 0; i <5; i++)
{
  printf("Enter the marks student %d is %d\n",i,marks[i]);

}

return 0;
}