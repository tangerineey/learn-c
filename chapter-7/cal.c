#include <stdio.h>

int main(void)
{
    int start_day, days;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    for (int i = 1; i < start_day; i++) {
        printf("   ");
    }

    for (int i = 1; i <= days; i++) {
        printf("%3d", i);

        if ((i + start_day - 1) % 7 == 0 || i == days) {
            printf("\n");
        }
    }

    return 0;
}
