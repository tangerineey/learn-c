#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number && (i * i) <= number; ++i) {
        if (i % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}
