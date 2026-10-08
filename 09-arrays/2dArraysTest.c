#include <stdio.h>

int main(void) {
    int rows = 2;
    int cols = 3;
    int matrix[2][3];

    // Reading values into the 2D array
    printf("Enter %d numbers for a %dx%d matrix:\n", rows * cols, rows, cols);
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("Enter element for Row %d, Column %d: ", r, c);
            scanf("%d", &matrix[r][c]); // Notice the '&' operator
        }
    }

    // Printing the populated 2D array
    printf("\n=== Complete Matrix ===\n");
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}