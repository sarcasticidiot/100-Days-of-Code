//Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter values of variables a and b = ");
    scanf("%d",&a);
    scanf("%d",&b);
    int swap;
    printf("The values of a and b are = %d and %d.\n",a,b);
    swap  = a;
    a = b;
    b = swap;
    printf("swapping.....\n");
    printf("The values of a and b are = %d and %d.\n",a,b);
    return 0;
}