//Write a program using a switch that performs simple arithmetic operations (addition, subtraction, multiplication, division) based on user input (operator +, -, *, /).
#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The result of addition: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result of subtraction: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result of multiplication: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The result of division: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please enter one of +, -, *, or /.\n");
    }
    return 0;
}
