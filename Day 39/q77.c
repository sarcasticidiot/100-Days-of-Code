/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int checkdiagonal(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return 0;
            }
        }
    }
    return 1; 
}

int main() {
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
    if (checkdiagonal(n, matrix)) {
        printf("True\n");
    } 
    else {
        printf("False\n");
    }
    return 0;
}