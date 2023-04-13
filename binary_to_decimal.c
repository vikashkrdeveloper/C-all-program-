#include<stdio.h>
#include<math.h>
int main()
{
     int bin;
     int s=0;
     int i=0;
     printf("Enter the binary number\n");
    scanf("%d",&bin);
    while (bin!=0)
    {
        s=s+pow(2,i)*(bin%10);
        bin=bin/10;
        i++;
    }
    printf("%d",s);

return 0;
}