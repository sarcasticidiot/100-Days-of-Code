#include <stdio.h>
#include <stdlib.h>

int frequentdigit(long long num) {
    int freq[10] = {0};

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        return 0;
    }

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int digit = 0;
    int count = freq[0];

    for (int i = 1; i < 10; i++) {
        if (freq[i] > count) {
            count = freq[i];
            digit = i;
        }
    }

    return digit;
}

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    printf("%d\n", frequentdigit(n));

    return 0;
}