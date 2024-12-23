/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2024  

Purpose:
Perform addition, subtraction, and division of two matrices and display results using a reusable function.

Description:
- The program initializes two 3x2 matrices with predefined values.
- It performs addition, subtraction, and element-wise division on the matrices.
- Results of each operation are printed using the `print2Darray` function.

*/

#include <stdio.h>

// Function Declaration
void print2Darray(int rows, int cols, int fx[rows][cols]);

int main() {
    // Dimensions of the matrices
    int rows = 3, cols = 2;

    // Input matrices
    int matrixA[3][2] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };
    int matrixB[3][2] = {
        {2, 4},
        {6, 8},
        {10, 12}
    };

    // Resultant matrices for each operation
    int sum[3][2], diff[3][2], div[3][2];

    // Perform addition, subtraction, and division
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];     // Addition
            diff[i][j] = matrixA[i][j] - matrixB[i][j];    // Subtraction
            div[i][j] = matrixA[i][j] / matrixB[i][j];     // Division
        }
    }

    // Print results
    printf("Matrix A:\n");
    print2Darray(rows, cols, matrixA);

    printf("Matrix B:\n");
    print2Darray(rows, cols, matrixB);

    printf("Sum of Matrices:\n");
    print2Darray(rows, cols, sum);

    printf("Difference of Matrices:\n");
    print2Darray(rows, cols, diff);

    printf("Element-wise Division of Matrices:\n");
    print2Darray(rows, cols, div);

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
Matrix A:
10      20
30      40
50      60

Matrix B:
2       4
6       8
10      12

Sum of Matrices:
12      24
36      48
60      72

Difference of Matrices:
8       16
24      32
40      48

Element-wise Division of Matrices:
5       5
5       5
5       5
*/

/*
Notes:
1. Division is performed element-wise; ensure no element in the divisor matrix is zero.
2. The `print2Darray` function makes displaying matrices modular.
*/
