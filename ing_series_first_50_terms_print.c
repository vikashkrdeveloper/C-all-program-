 #include <stdio.h>
#include<math.h>
int main()
{
    int num,sum=0;
    printf("Enter the number:");
    scanf("%d", &num);
     int i = num;
     while(i<=100)  
    {
        if ((i >= 1 && i <= 50))
        {

            printf(" sum = %dx%d\n",i,sum=pow(i,4));
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