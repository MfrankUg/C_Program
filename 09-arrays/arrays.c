#include <stdio.h>

int main() {

    // A 2x3 matrix (2 rows, 3 columns)
    int matrix[2][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}  // Row 1
    };

    // Accessing Row 1, Column 0 -> 4
    int val = matrix[1][0];

    printf("Value at Row 1, Column 0: %d\n", val);

    // Traversal via Nested Loops
    for (int r = 0; r < 2; r++) {

        for (int c = 0; c < 3; c++) {
            printf("%d ", matrix[r][c]);
        }

        printf("\n");
    }

    return 0;
}