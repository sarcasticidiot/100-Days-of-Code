/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{
    int n,m,x,y;
    printf("Enter rows and columns for matrix1: ");
    scanf("%d %d",&n,&m);
    printf("Enter rows and columns for matrix2: ");
    scanf("%d %d",&x,&y);
    if(n == x && m == y){
        printf("For matrix 1");
        int matrix1[n][m];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                printf("Enter value: ");
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("For matrix 2");
        int matrix2[x][y];
        for(int i = 0;i<x;i++){
            for(int j = 0;j<y;j++){
                printf("Enter value: ");
                scanf("%d",&matrix2[i][j]);
                }
        }
        printf("Sum of matrix: \n");
        int matrix3[x][y];
        for(int i = 0;i<x;i++){
            for(int j = 0;j<y;j++){
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
                printf("%d ",matrix3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Order of matrices must be same in order to perform addition.\n");
    }
    return 0;
}