//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i, a, b;

    scanf("%d", &n);

    int x[n];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    a = x[0];
    b = x[1];

    if (b > a) {
        int c = a;
        a = b;
        b = c;
    }

    for (i = 2; i < n; i++) {
        if (x[i] > a) {
            b = a;
            a = x[i];
        }
        else if (x[i] > b) {
            b = x[i];
        }
    }

    printf("%d", b);

    return 0;
}