// Nested if for Discount Calculation 
//Write a program that calculates a discount based on the amount spent by a customer:
//•	If the amount is $100 or more, apply a 10% discount.
//•	If the amount is $500 or more, apply an additional 5% discount.

#include <stdio.h>
int main() {
    double amount, discount = 0.0, finalAmount;
    printf("Enter the amount spent: ");
    scanf("%lf", &amount);
    if (amount >= 100) {
        discount = amount * 0.10;
        printf("10%% discount applied: $%.2lf\n", amount * 0.10);
        if (amount >= 500) {
            double additionalDiscount = amount * 0.05;
            discount += additionalDiscount;
            printf("Additional 5%% discount applied: $%.2lf\n", additionalDiscount);
        }
    }
    finalAmount = amount - discount;
    printf("Total discount applied: $%.2lf\n", discount);
    printf("Final amount to be paid: $%.2lf\n", finalAmount);
    return 0;
}
