/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    int a = m,b = n;
    int transpose[a][b];
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("Matrix: \n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose: \n");
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}