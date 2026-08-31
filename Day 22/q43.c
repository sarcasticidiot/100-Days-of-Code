//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>
int factorial(int x);
int factorial(int x){
    if(x == 0 || x == 1)
        return 1;
    int fact  = x * factorial(x-1);
    return fact;
}
int main()
{
    int n,a = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp = n;
    while (temp!=0){
        a += factorial(temp%10);
        temp /= 10;
    }
    if(a == n)
        printf("%d is a strong number.\n",n);
    else
        printf("%d is not a strong number.\n",n);
    return 0;
}