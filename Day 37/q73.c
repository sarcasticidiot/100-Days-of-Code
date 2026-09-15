/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n,&m);
    int matrix[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("Enter value: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0;i<n;i++){
        int a = 0;
        for(int j = 0;j<m;j++){
            a += matrix[i][j];
        }
        printf("Sum of elements of row %d = %d.\n",i+1,a);
    }
    return 0;
}