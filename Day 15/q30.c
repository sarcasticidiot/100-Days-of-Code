//Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    //Calculating the length of the number
    int n,a=0,b=0;
    printf("Enter the number = ");
    scanf("%d",&n);    
    int c = n;
    while(2){
        if(c == 0){
            break;
        }
        a += 1;
        c /= 10;
    }
    //a has the length of the number stored in n.

    //now reversing the number
    for (int i = 1;i<=a;i++){
        b = b*10 + n%10;
        n /= 10;
    }
    printf("Reverse of the given number = %d.\n",b);
    return 0;
}