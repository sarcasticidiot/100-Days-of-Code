//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{   
    int l,b;
    printf("Enter the sides of rectangle: (l and b) in m. \n");
    scanf("%d",&l);
    scanf("%d",&b);
    printf("The perimeter of the rectangle is = %d m.\n",2*(l+b));
    printf("The area of the rectangle is = %d m^2.\n",l*b);
    return 0;
}