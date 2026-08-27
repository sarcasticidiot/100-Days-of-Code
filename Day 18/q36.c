//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    a = num1;
    b = num2;

    // Euclidean algorithm to find HCF
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("The HCF = %d.\n", a);

    return 0;
}