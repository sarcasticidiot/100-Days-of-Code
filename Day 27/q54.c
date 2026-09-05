/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main()
{
    for(int i = 1;i<=4;i++){
        for(int k = 4-i;k>0;k--){
            printf(" ");
        }
        for(int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 3;i>0;i--){
        for(int k = 4-i;k>0;k--){
            printf(" ");
        }
        for(int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}