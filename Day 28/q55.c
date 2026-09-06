/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Prime numbers existing between 1 and %d are: \n",n);
    for(int i = 1;i<=n;i++){
        int a = 0;
        for(int j = 1;j<=i;j++){
            if(i%j==0)
                a+=1;
        }
        if(a == 2)
            printf("%d\n",i);
    }
    return 0;
}