// Takes a date as input and writes it in "legal" format.

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    // Day suffix
    printf("Dated this %d", day);
    switch (day) {
    // Handle "st" suffix
    case 1:
    case 21:
    case 31:
        printf("st");
        break;
    // Handle "nd" suffix
    case 2:
    case 22:
        printf("nd");
        break;
    // Handle "rd" suffix
    case 3:
    case 23:
        printf("rd");
        break;
    // Handle "th" suffix
    default:
        printf("th");
        break;
    }

    // Months
    printf(" day of ");
    switch (month) {
    case 1:
        printf("January");
        break;
    case 2:
        printf("Febuary");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    }

    // Year
    printf(", 20%.2d.\n", year);

    return 0;
}
