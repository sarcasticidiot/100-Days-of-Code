/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main()
{
    int n,x,a = 0;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&x);
    for(int i = 0;i<n;i++){
        if(x == arr[i]){
            a += 1;
            printf("Number found at index %d.\n",i);
        }
    }
    if(a== 0)
        printf("-1\n");
    return 0;
}