#include<stdio.h>

int main()
{
    float km,m,ft,cm,inch;
    printf("Enter the kilometers\n");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("distance in meter : %.2f\n",m);
    printf("distance in centimeter : %.2f\n",cm);
    printf("distance in feet: %.2f\n",ft);
    printf("distance in inch : %.2f\n",inch);
    return 0;
}