// Takes a two digit number and prints out the number with its digits reversed.

#include <stdio.h>

int main(void)
{
    int number, first_digit, last_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first_digit = number / 10;
    last_digit = number % 10;

    printf("The reversal is: %d%d\n", last_digit, first_digit);

    return 0;
}
