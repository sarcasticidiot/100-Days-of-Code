//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter values of variables a and b = ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The values of a and b are = %d and %d.\n",a,b);
    printf("Swapping.......\n");
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The values of a and b are = %d and %d.\n",a,b);
    return 0;
}