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
    int n,num[100],i=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        int rem = temp%2;
        num[i] = rem;
        temp /= 2;
        i++;
    }
    printf("Binary of %d = ",n);
    for(int j = i-1;j>=0;j--){
        printf("%d",num[j]);
    }
    printf("\n");
    return 0;
}
