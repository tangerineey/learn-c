#include <stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void)
{
    unsigned short swapped, number;

    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &number);

    swapped = swap_bytes(number);

    printf("Number with bytes swapped: %hx\n", swapped);

    return 0;
}

unsigned short swap_bytes(unsigned short i)
{
    return i >> 8 | i << 8;
}
