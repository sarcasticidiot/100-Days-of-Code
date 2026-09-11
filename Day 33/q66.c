//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, a;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int x[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("Enter the element: ");
    scanf("%d", &a);

    i = n - 1;

    while (i >= 0 && x[i] > a) {
        x[i + 1] = x[i];
        i--;
    }

    x[i + 1] = a;

    for (i = 0; i <= n; i++)
        printf("%d ", x[i]);

    return 0;
}