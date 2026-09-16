/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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
    if(a == n && b == m){
        int h = 0;
        for(int i = 0;i<a;i++){
            for(int j = 0;j<b;j++){
                if(matrix[i][j]!=transpose[i][j]) h+=1;
            }
        }
        if(h == 0){
            printf("Matrix is symmetric.\n");
        }
        else{
            printf("Matrix is not symmetric.\n");
        }
    }
    else{
        printf("Matrix is not symmetric.\n");
    }
    return 0;
}