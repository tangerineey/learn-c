#include <stdio.h>

int main(void)
{
    int row, col;

    int matrix[5][5] = { 0 };

    int row_total[5] = { 0 };
    int col_total[5] = { 0 };

    for (row = 0; row < 5; row++) {
        printf("Enter row %d: ", row + 1);
        scanf("%d %d %d %d %d", &matrix[row][0], &matrix[row][1], &matrix[row][2], &matrix[row][3], &matrix[row][4]);
        row_total[row] = matrix[row][0] + matrix[row][1] + matrix[row][2] + matrix[row][3] + matrix[row][4];
    }

    for (col = 0; col < 5; col++) {
        for (row = 0; row < 5; row++) {
            col_total[col] = matrix[0][col] + matrix[1][col] + matrix[2][col] + matrix[3][col] + matrix[4][col];
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", row_total[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", col_total[i]);
    }
    printf("\n");

    return 0;
}
