#include <stdio.h>

int main(void)
{
    long long int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entires in the table: ");
    scanf("%lld", &n);

    // Scanf leaves behind the '\n' character for any further calls
    // so the getchar here removes it, else it will be used for the first
    // call of get char in the loop.
    getchar();

    for (i = 1; i <= n; i++) {
        printf("%10lld%10lld\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press enter to continue...\n");
            getchar();
        }
    }

    return 0;
}
