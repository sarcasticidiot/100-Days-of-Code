//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the sides of triangle = ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a == b && b == c && c == a){
        printf("The given triangle is equilateral.\n");
    }
    else if(a == b || b == c || c == a){
        printf("The given triangle is isosceles.\n");
    }
    else{
        printf("The given triangle is scalene.\n");
    }
    return 0;
}