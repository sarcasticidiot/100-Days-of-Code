//Write a program to reverse a given number.

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
    printf("The reverse of %d = %d.\n",n,rev);
    return 0;
}
