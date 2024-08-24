#include <stdio.h>

int largest(int a[], int n);
int average(int a[], int n);
int positive_elements(int a[], int n);

int main(void)
{
    return 0;
}

int largest(int a[], int n)
{
    int largest_element = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > largest_element) {
            largest_element = a[i];
        }
    }

    return largest_element;
}

int average(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

int positive_elements(int a[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            total++;
        }
    }

    return total;
}
