//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 numbers:\n");
    
    scanf("%d", &x);
    scanf("%d", &y);

    printf("The sum of %d and %d = %d\n", x, y, x + y);
    
    return 0;
}