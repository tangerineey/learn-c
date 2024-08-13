// Accepts dates in the form mm/dd/yyyy and then dispaly's them in the form yyyymmdd.
#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n", year, month, day);

    return 0;
}
