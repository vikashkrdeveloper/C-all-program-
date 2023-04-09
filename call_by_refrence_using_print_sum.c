#include <stdio.h>
void fun(int a,int b,int *sum,float *avg){
 *sum=a+b;
 *avg= (float)*sum/2;
}
int main()
{
    int i=7,j=8 ,sum;
float avg;
    fun(i,j,&sum,&avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avrage is %.2f\n",avg);
   
    return 0;
}