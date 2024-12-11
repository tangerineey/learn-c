#include <stdio.h>
#include <math.h>

double round_nearest(double x, int exp)
{
    double multiplier = pow(10, exp);
    double mantissa = x * multiplier;
    double rounded = mantissa < 0.0 ? ceil(mantissa - 0.5) : floor(mantissa + 0.5);
    return rounded / multiplier;
}

int main(void)
{
    int exp;
    double input;

    printf("Enter a double: ");
    scanf("%lf", &input);
    printf("Enter a exponent: ");
    scanf("%d", &exp);

    printf("You entered %lf, and rounded its: %lf\n", input, round_nearest(input, exp));

    return 0;
}
