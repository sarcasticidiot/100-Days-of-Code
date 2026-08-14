//Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main()
{
    int a = 5;
    int b = 6;
    int swap;
    printf("The values of a and b are = %d and %d.\n",a,b);
    swap  = a;
    a = b;
    b = swap;

    printf("The values of a and b are = %d and %d.\n",a,b);
    return 0;
}