//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastPos[256];
    for (int i = 0; i < 256; i++) {
        lastPos[i] = -1;
    }

    int maxLength = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = s[right];

        if (lastPos[ch] >= left) {
            left = lastPos[ch] + 1;
        }

        lastPos[ch] = right;

        int window = right - left + 1;
        if (window > maxLength) {
            maxLength = window;
        }
    }

    return maxLength;
}

int main() {
    char s[1000];
    if (scanf("%s", s) != 1) return 0;

    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}