#include<stdio.h>

calculateProfitLoss(float costPrice, float sellingPrice)
{
    if (sellingPrice > costPrice) 
    {
        printf("Profit: %.2f\n", sellingPrice - costPrice);
    } 
    else if (costPrice > sellingPrice) 
    {
        printf("Loss: %.2f\n", costPrice - sellingPrice);
    } 
    else 
    {
        printf("No profit, no loss.\n");
    }
}

int main(){

    float costPrice, sellingPrice;
    
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    calculateProfitLoss(costPrice, sellingPrice);

}
