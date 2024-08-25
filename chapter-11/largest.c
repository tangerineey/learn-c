#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int* largest, int* second_largest);

int main(void)
{
    int largest = 0, second_largest = 0, a[N];

    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    find_two_largest(a, N, &largest, &second_largest);

    printf("Largest value: %d\n", largest);
    printf("Second largest value: %d\n", second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int* largest, int* second_largest)
{
    for (int i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > *second_largest && a[i] != *largest) {
            *second_largest = a[i];
        }
    }
}
