#include <stdio.h>
#include <string.h>
struct cardriver
{
    char name[56];
    char root[54];
    int lincesno;
    float kms;
};
int main()
{
    int num;
    printf("Enter the driver detail number\n");
scanf("%d",&num);
    struct cardriver car;
    for (int i = 0; i < num; i++)
    {

        printf("Enter the driver name %d \n", i);
        scanf("%s", &car.name);
        printf("Enter the driver root %d \n", i);
        scanf("%s", &car.root);
        printf("Enter the driver lincesno %d \n", i);
        scanf("%d", &car.lincesno);
        printf("Enter the ride kms %d \n", i);
        scanf("%f", &car.kms);
    }
    for (int i = 0; i < 2; i++)
    {

        printf("%s\n", car.name);
        printf("%s\n", car.root);
        printf("%d\n", car.lincesno);
        printf("%f\n", car.kms);
    }
    return 0;
}