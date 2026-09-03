/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main()
{
    for(int i = 5;i>0;i--){
        for(int k = 5-i;k>0;k--){
            printf(" ");
        }
        for(int j = i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}