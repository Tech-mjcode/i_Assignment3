#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the cost price of the product : ");
    scanf("%d",&cp);
    printf("Enter the selling price of the product : ");
    scanf("%d",&sp);
    if(sp>cp)
    {
        //profit
        float profit;
        profit = sp-cp;
        float profit_per = (profit/cp)*100;
        printf("Profit percentage is %.2f",profit_per);
    }
    else
    {
        //loss
        float loss;
        loss = cp-sp;
        float lost_per = (loss/cp)*100;
        printf("Profit percentage is %.2f",lost_per);
    }
}
