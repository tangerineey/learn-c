#include <stdio.h>

// 16 bits, we need to be clear when declaring it as a
// unsigned int or signed int because int leaves
// it to the compilers discretion.
struct file_date {
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 7;
};

// An unsigned short is 2 bytes (16 bits) so our
// file_date struct fits in the union nicely.
union int_date {
    unsigned short i;
    struct file_date fd;
};

void print_date(unsigned short n)
{
    union int_date u;

    // So now the union is holding a unsigned short,
    // but because its members are formatted to 16 bits
    // we can read it as if it was a file_date.
    u.i = n;
    printf("%d/%d/%d\n", u.fd.month, u.fd.day, u.fd.year + 1980);
}

int main(void)
{
    return 0;
}
