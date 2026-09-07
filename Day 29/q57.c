/*Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

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
    int sum = 0;
    for(int j = 0;j<n;j++){
        sum += a[j];
    }
    printf("Sum of elements = %d.\n",sum);
    return 0;
}