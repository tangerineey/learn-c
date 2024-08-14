#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("[ERROR] Grade outside 0-100 range!\n");
        return 1;
    }

    int bracket = grade / 10;

    printf("Letter grade: ");
    switch (bracket) {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("F\n");
        break;
    }

    return 0;
}
