//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,a = 0,digits = 0;
    printf("Enter a number = ");
    scanf("%d",&n);
    int temp = n;
    while(temp!= 0){
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp!=0){
        int b = temp%10;
        a = a + pow(b,digits);
        temp /= 10;
    }
    if (a == n)
        printf("%d is an Armstrong Number.\n",n);
    
    else
        printf("%d is not an Armstrong Number.\n",n);
    
    return 0;
}