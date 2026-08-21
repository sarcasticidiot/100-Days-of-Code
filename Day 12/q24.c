/*
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>

int main()
{
    int units,bill;
    printf("Enter the number of units consumed = ");
    scanf("%d",&units);
    if(units<0){
        printf("Invalid Input!.\n");
    }
    else if(units<=100){
        bill = units*5;
        printf("Your electricity bill is = ₹%d.\n",bill);
    }
    else if(units <= 200){
        bill = 100*5 + (units-100)*7; 
        printf("Your electricity bill is = ₹%d.\n",bill);
    }
    else if(units<=300){
        bill = 100*5 + 100*7 + (units-200)*10;
        printf("Your electricity bill is = ₹%d.\n",bill);
    }
    else{
        bill = 100*5 + 100*7 + 100*10 + (units-300)*12;
        printf("Your electricity bill is = ₹%d.\n",bill);
    }
    
    return 0;
}