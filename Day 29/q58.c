/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        printf("Enter the value of element number %d = ",i);
        scanf("%d",&a[i]);
    }
    int b = a[0];
    int c = a[0];
    for(int j = 0;j<n;j++){
        int x = a[j];
        if(b<x)
            b = x;
        else if(c>x)
            c = x;
    }
    printf("The min and max in the array are %d and %d.\n",c,b);
    return 0;
}