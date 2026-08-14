//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float c;
    printf("Enter temperature in celcius = ");
    scanf("%f",&c);
    float f = c*(9.0/5.0) + 32;
    printf("Temperature in fahrenheit = %.2f.\n",f);
    return 0;
}