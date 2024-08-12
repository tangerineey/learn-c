// Solution to Chapter 2: C Fundamentals Programming Projects #4
// Asks the user for a dollar-cents amount and display's the amount with a 5% tax added.

#include <stdio.h>

#define TAX_RATE 0.05f

int main(void)
{
    float amount, amount_with_tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount_with_tax = amount + (amount * TAX_RATE);

    printf("With tax added: $%.2f\n", amount_with_tax);

    return 0;
}
