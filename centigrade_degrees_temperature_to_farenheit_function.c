#include<stdio.h>
float degreestemperature();
int main()
{
     printf("%.2f",degreestemperature());
return 0;
}
float degreestemperature(){
   float cels, fahr;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cels);
    //celsius to fahrenheit conversion formula
    return fahr = (cels * 9 / 5) + 32; 
}