/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2024  

Purpose:
Demonstrate different ways to initialize a 2x3 matrix in C and print it using a reusable function.

Description:
- The program shows various ways to initialize a 2x3 matrix in C.
- A generic function `print2Darray` is used to display the matrices.

Explanation:
1. **Matrix Initialization**:
   - Initialize with a single set of values `{1, 2, 3, 4, 5, 6}`.
   - Initialize with partial sets like `{{2, 3}, {4, 5, 6}}` (remaining elements default to 0).
   - Combine explicit and implicit initializations.

2. **Matrix Printing**:
   - The `print2Darray` function accepts the matrix dimensions and a 2D array as arguments to display the elements row by row.

3. **Output**:
   - Each initialization method produces distinct or identical matrix structures.

*/

// Function Declaration
void print2Darray(int rows, int cols, int fx[rows][cols]);

#include <stdio.h>

int main() {
    // Dimensions of the matrix
    int rows = 2, cols = 3;

    // Method 1: Initialize using a single set of values
    int matrix1[2][3] = {1, 2, 3, 4, 5, 6};

    // Method 2: Partial initialization with remaining elements defaulted to 0
    int matrix2[2][3] = {{2, 3}, {4, 5, 6}};

    // Method 3: Combine explicit and implicit initializations
    int matrix3[2][3] = {
        {1, 2, 3}, // Fully initialize first row
        {4}        // Partially initialize second row (remaining elements are 0)
    };

    // Print all matrices
    printf("Matrix 1 (Initialized with a single set of values):\n");
    print2Darray(rows, cols, matrix1);

    printf("Matrix 2 (Partial initialization):\n");
    print2Darray(rows, cols, matrix2);

    printf("Matrix 3 (Explicit and implicit initialization):\n");
    print2Darray(rows, cols, matrix3);

    return 0; // Indicate successful program execution
}

// Function Implementation
void print2Darray(int rows, int cols, int fx[rows][cols]) {
    for (int fi = 0; fi < rows; fi++) {
        for (int fj = 0; fj < cols; fj++) {
            printf("%d\t", fx[fi][fj]); // Tab-separated format
        }
        printf("\n"); // Newline after each row
    }
    printf("\n"); // Extra newline for better separation
}

/*
Sample Output:
---------------
Matrix 1 (Initialized with a single set of values):
1       2       3
4       5       6

Matrix 2 (Partial initialization):
2       3       0
4       5       6

Matrix 3 (Explicit and implicit initialization):
1       2       3
4       0       0
*/

/*
Notes:
1. Initializing using a single set of values `{1, 2, 3, 4, 5, 6}` fills the matrix in row-major order.
2. Partial initialization fills uninitialized elements with 0 by default.
3. Explicit and implicit initialization allows flexibility in setting specific values.
4. The `print2Darray` function simplifies displaying the matrices.
*/
