//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positive number.\n",n);
    }
    else if(n<0){
        printf("%d is a negative number.\n",n);
    }
    else{
        printf("The given number is 0.\n");
    }
    return 0;
}