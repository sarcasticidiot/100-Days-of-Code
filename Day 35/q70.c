//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, i, k, a;

    scanf("%d", &n);

    int x[n];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) {
        a = x[n - 1];

        for (int j = n - 1; j > 0; j--)
            x[j] = x[j - 1];

        x[0] = a;
    }

    for (i = 0; i < n; i++)
        printf("%d ", x[i]);

    return 0;
}