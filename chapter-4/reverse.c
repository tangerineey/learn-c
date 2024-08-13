// Takes a two digit number and prints out the number with its digits reversed.

#include <stdio.h>

int main(void)
{
    int number, first_digit, middle_digit, last_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    first_digit = number / 100;
    middle_digit = (number / 10) % 10;
    last_digit = number % 10;

    printf("The reversal is: %d%d%d\n", last_digit, middle_digit, first_digit);

    return 0;
}
