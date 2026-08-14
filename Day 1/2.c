//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 numbers:\n");
    
    scanf("%d", &x);
    scanf("%d", &y);

    printf("The sum of %d and %d = %d.\n", x, y, x+y);
    printf("The difference of %d and %d = %d.\n", x, y, x-y);
    printf("The product of %d and %d = %d.\n", x, y, x*y);
    printf("%d divided by %d = %d.\n", x, y, x/y);
    
    return 0;
}