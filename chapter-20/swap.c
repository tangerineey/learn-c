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
    unsigned short lsb, msb;
    lsb = i >> 8;
    msb = i << 8;
    return lsb | msb;
}
