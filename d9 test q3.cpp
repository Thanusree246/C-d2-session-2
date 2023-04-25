#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int matrix[][COLS], int transposed_matrix[][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }
}

void print_matrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposed_matrix[COLS][ROWS];

    transpose(matrix, transposed_matrix);

    printf("Original Matrix:\n");
    print_matrix(matrix);

    printf("Transposed Matrix:\n");
    print_matrix(transposed_matrix);

    return 0;
}
