/*
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>

int main()
{
    int days,fine;
    printf("Enter the number of days you're due = ");
    scanf("%d",&days);
    if(days<=5){
        fine = 2*days;
        printf("Your fine is = ₹%d.\n",fine);
    }
    else if(days>5 && days <=10){
        fine = (5)*2 + (days - 5)*4;
        printf("Your fine is = ₹%d.\n",fine);
    }
    else if(days>10 && days <= 30){
        fine = (5)*2 + (5)*4 + (days -10)*6;
        printf("Your fine is = ₹%d.\n",fine);
    }
    else if(days > 30){
        fine = (5)*2 + (5)*4 + (20)*6;
        printf("Your fine is = ₹%d.\nYour membership has been canceled.\n",fine);
    }
    else{
        printf("Invalid Input!\n");
    }
    
    return 0;
}