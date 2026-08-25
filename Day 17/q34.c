/*Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>

int main()
{
    int n,k=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n == 0 || n == 1){
        printf("%d is not a prime number.\n",n);
        return 0;
    }

    for(int i = 1;i<=n;i++){
        if(n%i==0)
            k++;
    }
    if(k==2)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}