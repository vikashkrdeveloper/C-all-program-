#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 0; i <=num; i++)
    {
        if ( num%2==0)
        {
           printf("this number is %d   prime\n",i);
        }
        else {
            printf("this number is %d  not prime\n",i);
        }
    }

    return 0;
}






// full not solving 
// }