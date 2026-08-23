//Write a program to print the sum of the first n odd numbers.
 #include <stdio.h>
 
 int main()
 {
    int n,a=0,i=1,b=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while(i<=n){
        a = a+b;
        b = b+2;
        i++;
    }
    printf("The sum of first n odd numbers = %d.\n",a);

    return 0;
 }