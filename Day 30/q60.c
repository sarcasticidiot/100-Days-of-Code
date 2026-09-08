/*Q60: Count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

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

    int b = 0,c= 0,d = 0;
    for(int j = 0;j<n;j++){
        int x = a[j];
        if(x>0)
            b+=1;
        else if(x<0)
            c+=1;
        else
            d+=1;
    }
    printf("The number of positive, negative and zero elements in array = %d,%d and %d.\n",b,c,d);
    return 0;
}