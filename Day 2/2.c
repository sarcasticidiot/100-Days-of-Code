#include <stdio.h>

#define pi 3.14
int main()
{
    int r;
    printf("Enter the radius of circle = ");
    scanf("%d",&r);
    float area = pi*r*r;
    float circ = 2*pi*r; 
    printf("The circumference of the circle = %.2f.\n", circ);
    printf("The area of circle = %.2f.\n",area);
    return 0;
}