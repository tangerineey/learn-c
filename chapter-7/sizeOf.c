#include <stdio.h>

int main(void)
{

    printf("Integer: %zd\n", sizeof(int));
    printf("Short: %zd\n", sizeof(short));
    printf("Long: %zd\n", sizeof(long));
    printf("Float: %zd\n", sizeof(float));
    printf("Double: %zd\n", sizeof(double));
    printf("Long Double: %zd\n", sizeof(long double));

    return 0;
}
