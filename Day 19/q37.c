//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main()
{
    int num1,num2,a,b,temp;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    num1 = a;
    num2 = b;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    int LCM = (num1 * num2)/a;
    printf("The LCM of %d and %d = %d.\n",num1,num2,LCM);
    return 0;
}