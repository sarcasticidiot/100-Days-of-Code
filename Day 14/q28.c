// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    long a=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i = 2;i<=n;i+=2){
        a *= i;
    }
    if(n<2){
        printf("There are no even numbers between 1 and 2.\n");
    }
    else if(n>2){
        printf("The product of even numbers from 1 to %d = %ld.\n",n,a);
    }
    return 0;
}