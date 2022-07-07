//Program which takes the cost price and selling price of a product from the user and calculate and print profit or loss percentage

#include<stdio.h>
#include<conio.h>
int main()
{
    float CP,SP,profit,loss,profit_percent,loss_percent;
    printf("Enter the Cost Price and Selling Price of the Product\n");
    scanf("%f %f",&CP,&SP);
    profit=SP-CP;
    loss=CP-SP;
    profit_percent=(profit/CP)*100;
    loss_percent=(loss/CP)*100;
    if(SP>CP)
    {
        printf("Profit = %f",profit);
        printf("\nProfit Percentage = %f",profit_percent);
    }
    else
    {
        printf("Loss = %f",loss);
        printf("\nLoss Percentage = %f",loss_percent);
    }
    getch();
}