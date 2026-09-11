//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, s, a, b, c;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int x[n];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("Enter the element to be searched: ");
    scanf("%d", &s);

    a = 0;
    b = n - 1;

    while (a <= b) {
        c = (a + b) / 2;

        if (x[c] == s) {
            printf("Found at index %d", c);
            return 0;
        }
        else if (x[c] < s)
            a = c + 1;
        else
            b = c - 1;
    }

    printf("-1");

    return 0;
}