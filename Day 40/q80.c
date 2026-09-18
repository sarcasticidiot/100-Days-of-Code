/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int n,m,x,y;
    printf("Enter rows and columns for matrix1: ");
    scanf("%d %d",&n,&m);
    printf("Enter rows and columns for matrix2: ");
    scanf("%d %d",&x,&y);
    if(n == y && m == x){
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
        printf("");
    }
    return 0;
}