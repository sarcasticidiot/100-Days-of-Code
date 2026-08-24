//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main()
{
    int n,a=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i = n;i>0;i--)
    {
        a *= i;
    }
    printf("The factorial of %d = %d.\n",n,a);

    return 0;
}