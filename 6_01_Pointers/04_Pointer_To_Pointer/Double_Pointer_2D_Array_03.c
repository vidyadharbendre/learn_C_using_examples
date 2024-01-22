#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;
    int **matrix;

    // Allocate memory for rows
    matrix = (int **)malloc(rows * sizeof(int *));
    
    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Initialize matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
        }
    }

    // Access elements using double pointer
    printf("Matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

// The output of the above program is shown as below
/*
Matrix elements:
0 1 2 
3 4 5 
6 7 8 
*/