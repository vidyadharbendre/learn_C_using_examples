/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2024  

Purpose:
Perform matrix multiplication of two matrices and display the result using a reusable function.

Description:
- The program initializes two matrices with predefined values.
- It computes the product of the two matrices using standard multiplication logic.
- The result is displayed using the `print2Darray` function.

*/

#include <stdio.h>

// Function Declaration
void print2Darray(int rows, int cols, int fx[rows][cols]);

int main() {
    // Dimensions of the matrices
    int rowsA = 3, colsA = 2, rowsB = 2, colsB = 3;

    // Input matrices
    int matrixA[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int matrixB[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // Resultant matrix for multiplication
    int product[3][3] = {0};

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Print results
    printf("Matrix A:\n");
    print2Darray(rowsA, colsA, matrixA);

    printf("Matrix B:\n");
    print2Darray(rowsB, colsB, matrixB);

    printf("Product of Matrices:\n");
    print2Darray(rowsA, colsB, product);

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
1       2
3       4
5       6

Matrix B:
7       8       9
10      11      12

Product of Matrices:
27      30      33
61      68      75
95      106     117
*/

/*
Notes:
1. Matrix multiplication is valid only if the number of columns in the first matrix equals the number of rows in the second matrix.
2. Ensure the dimensions are correctly defined to prevent logical errors.
*/
