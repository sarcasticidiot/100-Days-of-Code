//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main()
{
    int n,b = 1;
    printf("Enter number: ");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        int a = temp%10;
        if(a%2!=0){
            b *= a;
        }
        temp /= 10;
    }
    printf("The product of odd digits of %d = %d.\n",n,b);
    return 0;
}