/*Q62: Reverse an array without taking extra space.


Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

void reverse(int array[], int y);

void reverse(int array[],int y){
    int g = 0;
    int h = y-1;
    
    while(g<h){
        int temp = array[g];
        array[g] = array[h];
        array[h] = temp;
        g++;
        h--;
    }
}

int main()
{
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        printf("Enter the value of element number %d = ",i);
        scanf("%d",&a[i]);
    }
    reverse(a,n);

    for(int j = 0;j<n;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
    return 0;
}