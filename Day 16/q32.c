// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main()
{
    int n, rev = 0;
    printf("Enter the number = ");
    scanf("%d",&n);
    int a = n;
    while(a!=0){
        int rem = a%10;
        rev = rev*10 + rem;
        a /= 10;
    }
    if(n == rev)
        printf("%d is a palindrome.\n",n);
    else
        printf("%d is not a palindrome.\n",n);
    return 0;
}