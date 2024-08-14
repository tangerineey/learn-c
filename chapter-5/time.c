#include <stdio.h>

int main(void)
{
    int hour, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    int adj_hour = hour % 12;

    printf("Equivalent 12-hour time: %d:%.2d ", adj_hour == 0 ? 12 : adj_hour, minutes);

    if (hour < 12) {
        printf("AM\n");
    } else {
        printf("PM\n");
    }

    return 0;
}
