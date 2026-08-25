/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int n,num=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        int rem = temp%2;
        num = num*10 + rem;
        temp /= 2;
    }

    //now reversing 'num' to find binary:

    int t = num;
    int binary=0;
    while(t!=0){
        int rem = t%10;
        binary = binary*10 + rem;
        t /= 10;
    }
    printf("%d is the binary form of number %d.\n",binary,n);
    return 0;
}
