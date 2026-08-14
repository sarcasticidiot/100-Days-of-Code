//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n,a = 0;
    printf("First n natural numbers. \nEnter the value of n = ");
    scanf("%d",&n);
    for(int i = 1; i <= n;i++){
        a = a+i;
    }
    printf("The sum of first n natural numbers = %d.\n",a);
    return 0;
}