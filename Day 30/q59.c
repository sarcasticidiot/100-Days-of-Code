/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

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

    int b = 0,c= 0;
    for(int j = 0;j<n;j++){
        int x = a[j];
        if(x%2==0)
            b+=1;
        else
            c+=1;
    }
    printf("The number of odd and even numbers in array = %d and %d.\n",c,b);
    return 0;
}