// #include<stdio.h>

// int main()
// {
//      float cels,fahrenheit_tempurature;
//      printf("enter the tempurature celsius \n");
//      scanf("%f",&cels);
//     printf("%f",fahrenheit_tempurature=(1.8*cels)+32);
// return 0;
// }
 #include <stdio.h>
int main()
{
    float cels, fahr;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cels);
    //celsius to fahrenheit conversion formula
    fahr = (cels * 9 / 5) + 32; 
    printf("%.2f Celsius = %.2f Fahrenheit", cels, fahr);
    return 0;
}