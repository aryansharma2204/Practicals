#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    float cost_price, selling_price, profit, loss;

    // Ask user for cost price and selling price
    printf("Enter cost price: ");
    scanf("%f", &cost_price);
    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("Profit: %.2f", profit);
    }
    else if (selling_price < cost_price) {
        loss = cost_price - selling_price;
        printf("Loss: %.2f", loss);
    }
    else {
        printf("No profit, no loss.");
    }

    return 0;
}
