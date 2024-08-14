#include <stdio.h>

int main(void)
{
    float windspeed;

    printf("Enter a windspeed (knots): ");
    scanf("%f", &windspeed);

    printf("The wind speed is ");
    if (windspeed < 1) {
        printf("calm.\n");
    } else if (windspeed <= 3) {
        printf("light air.\n");
    } else if (windspeed <= 27) {
        printf("breeze.\n");
    } else if (windspeed <= 47) {
        printf("gale.\n");
    } else if (windspeed <= 63) {
        printf("storm.\n");
    } else {
        printf("hurricane.\n");
    }

    return 0;
}
