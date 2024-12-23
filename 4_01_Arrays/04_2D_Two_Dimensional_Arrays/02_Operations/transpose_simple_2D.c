/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2024  

Purpose:
Take a 3x2 matrix as input, compute its transpose, and display both using a reusable function.

Description:
- The program initializes a 3x2 matrix with predefined values.
- A transpose of the matrix is computed and stored in a 2x3 matrix.
- Both the original and transposed matrices are printed using the `print2Darray` function.

Explanation:
1. **Matrix Initialization**:
   - The program defines a 3x2 matrix with values.

2. **Matrix Transpose**:
   - A transpose of the 3x2 matrix is computed, resulting in a 2x3 matrix.

3. **Matrix Printing**:
   - The reusable function `print2Darray` is used to display both matrices.

*/

#include <stdio.h>

// Function Declaration
void print2Darray(int rows, int cols, int fx[rows][cols]);

int main() {
    // Dimensions of the matrices
    int rows = 3, cols = 2;

    // Input 3x2 matrix
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Transposed 2x3 matrix
    int transpose[2][3];

    // Compute the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("Original 3x2 Matrix:\n");
    print2Darray(rows, cols, matrix);

    // Print transposed matrix
    printf("Transposed 2x3 Matrix:\n");
    print2Darray(cols, rows, transpose);

    return 0; // Indicate successful program execution
}

// Function Implementation
void print2Darray(int rows, int cols, int fx[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", fx[i][j]); // Tab-separated format
        }
        printf("\n"); // Newline after each row
    }
    printf("\n"); // Extra newline for better separation
}

/*
Sample Output:
---------------
Original 3x2 Matrix:
1       2
3       4
5       6

Transposed 2x3 Matrix:
1       3       5
2       4       6
*/

/*
Notes:
1. The transpose of a matrix swaps rows with columns.
2. The dimensions of the transpose matrix are reversed.
3. The `print2Darray` function simplifies displaying both the original and transposed matrices.
*/
