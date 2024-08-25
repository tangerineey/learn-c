#include <stdio.h>

void swap(int* p, int* q);

int main(void)
{
    int i = 5, q = 3;
    printf("Original I: %d Original Q: %d\n", i, q);
    swap(&i, &q);
    printf("Swapped I: %d Swapped Q: %d\n", i, q);
    return 0;
}

void swap(int* p, int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
