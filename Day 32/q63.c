/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter the number of elements you want in arrays A and B: \n");
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2];
    printf("For Array A\n");
    for(int i = 0;i<n1;i++){
        printf("Enter the value of element number %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("For Array B\n");
    for(int i = 0;i<n2;i++){
        printf("Enter the value of element number %d: ",i);
        scanf("%d",&b[i]);
    }
    int c[n1+n2];
    for (int i = 0; i < n1; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        c[n1 + i] = b[i]; 
    }
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}