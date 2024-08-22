#include <stdio.h>

#define N 10

int main(void)
{
    double ident[N][N];
    int row, col;

    // Populate the main diagonal
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (row == col) {
                ident[row][col] = 1.0;
            } else {
                ident[row][col] = 0.0;
            }
        }
    }

    // Print out the columns
    for (int i = 0; i < N; i++) {
        printf("%5d", i);
    }
    printf("\n");

    // Print out the row and values
    for (row = 0; row < N; row++) {
        printf("%d  ", row);
        for (col = 0; col < N; col++) {
            printf("%1.1f  ", ident[row][col]);
        }
        printf("\n");
    }

    return 0;
}
