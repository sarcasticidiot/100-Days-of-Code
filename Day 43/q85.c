/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
int main() {
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[len] != '\0'){
        len++;
    }
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    return 0;
}