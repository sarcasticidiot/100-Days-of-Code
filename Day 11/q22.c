//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float cost,selling;
    printf("Enter cost and selling price = \n");
    scanf("%f %f",&cost,&selling);
    if(cost<=0){
        printf("Invalid input. Enter value again!.\n");
        return 0;
    }
    float variation = selling - cost;
    float percent;
    if(variation > 0){
        printf("Profit was made!!\n");
        percent = (variation/cost)*100;
        printf("Profit percentage = %.2f%%.\n",percent);
    }
    else if(variation < 0){
        printf("Loss was made.\n");
        percent = (-variation/cost)*100;
        printf("Loss percentage = %.2f%%.\n",percent);
    }
    else{
        printf("Neither profit nor loss was made.\nProfit Percentage = 0%%.\n");
    }
    return 0;
}