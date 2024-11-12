//Write a program using a switch that performs simple arithmetic operations (addition, subtraction, multiplication, division) based on user input (operator +, -, *, /).
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
