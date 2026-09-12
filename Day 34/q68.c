//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, i, a;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int x[n];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("Enter the position: ");
    scanf("%d", &a);

    for (i = a; i < n - 1; i++)
        x[i] = x[i + 1];

    for (i = 0; i < n - 1; i++)
        printf("%d ", x[i]);

    return 0;
}