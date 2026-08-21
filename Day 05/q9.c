//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

//Formula for CI = p*(1+ r/n)^nt


int main()
{   
    float p;
    float n,r,t;
    printf("Enter the values of p,r,t and n");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    scanf("%f",&n);
    float SI = (p*r*t)/100.0;
    float x =  (1+ (r/100.0)/n);
    float y = pow(x,n*t);
    float A_ci = p*y;
    printf("Simple interest based on the values given = %.2f.\n",SI);
    printf("Amount(interest + principle) by compound interest = %.2f.\n",A_ci);
    printf("CI by the values given(A-P) = %.2f.\n", A_ci - p);
    return 0;
}