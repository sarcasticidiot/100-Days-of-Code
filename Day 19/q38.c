//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main()
{
    int n,a = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        a += temp%10;
        temp /= 10;
    }
    printf("The sum of digits of %d = %d.\n",n,a);
    return 0;
}