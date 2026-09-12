//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, i, a, b;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int x[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("Enter position and element: ");
    scanf("%d %d", &b, &a);

    for (i = n; i > b; i--)
        x[i] = x[i - 1];

    x[b] = a;

    for (i = 0; i <= n; i++)
        printf("%d ", x[i]);

    return 0;
}