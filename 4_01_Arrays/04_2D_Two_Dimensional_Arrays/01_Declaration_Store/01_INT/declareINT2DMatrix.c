#include <stdio.h>

int main() {
    int rows = 2, cols = 2;
    int matrix[2][2] = {{1, 2}, {3, 4}}; // Initialize a 2x2 matrix
    
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]); // Display matrix elements
        }
        printf("\n");
    }

    return 0;
}

// The output of the above program is:
/*
Matrix:
1 2 
3 4
*/ 