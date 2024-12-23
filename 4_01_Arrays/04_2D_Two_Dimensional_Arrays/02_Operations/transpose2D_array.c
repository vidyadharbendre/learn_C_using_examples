/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2024  

Purpose:
Transpose a 2D matrix and print the result.

Description:
- The program demonstrates how to transpose a 2D array using nested loops.
- It uses two functions:
  1. `print2Darray` to display any 2D array.
  2. `convert2transpose` to compute the transpose of a given 2D array.

Explanation:
1. **Matrix Declaration**:
   - The matrix `x` is statically declared with predefined values.
   - A transpose matrix `transpose2D` is initialized to zeros for demonstration purposes.

2. **Printing Original and Transpose**:
   - `print2Darray` is used to display the original matrix and transpose matrix.

3. **Transpose Logic**:
   - The `convert2transpose` function computes the transpose by swapping rows and columns.
   - It uses an intermediate matrix `ftx` to store and display the transpose.

4. **Output**:
   - The program displays the original matrix and its transpose in a formatted way.

Note 1:
- The dimensions `ROWSIZE` and `COLSIZE` are defined as macros to simplify code readability.
- The transpose matrix is dynamically computed during runtime.

Note 2:
- Ensure the array is properly initialized to avoid undefined behavior.
- Debugging tools like **https://pythontutor.com/c.html#mode=edit** can help visualize 2D array operations in C.

*/

#include <stdio.h>

#define ROWSIZE 2 // Number of rows in the matrix
#define COLSIZE 3 // Number of columns in the matrix

// Function prototypes
void print2Darray(int rows, int cols, int fx[rows][cols]);
void convert2transpose(int fx[ROWSIZE][COLSIZE]);

int main() {
    // Original matrix declaration
    int x[ROWSIZE][COLSIZE] = {
        {1, 2, 0}, // First row
        {3, 4, 5}  // Second row
    };

    // Transpose matrix for demonstration (initialized to zero)
    int transpose2D[COLSIZE][ROWSIZE] = {0};

    // Print the original matrix
    printf("Original 2D array:\n");
    print2Darray(ROWSIZE, COLSIZE, x);

    // Print the initialized transpose matrix
    printf("\nInitialized transpose 2D array:\n");
    print2Darray(COLSIZE, ROWSIZE, transpose2D);

    // Compute and display the transpose
    printf("\nTranspose of the 2D array:\n");
    convert2transpose(x);

    return 0;
}

/*
Function:
print2Darray

Purpose:
- Prints a 2D array with the specified dimensions.

Parameters:
- rows: Number of rows in the 2D array.
- cols: Number of columns in the 2D array.
- fx: The 2D array to be printed.

Logic:
- Nested loops iterate through rows and columns to print each element.
*/
void print2Darray(int rows, int cols, int fx[rows][cols]) {
    int fi, fj; // Loop variables
    for (fi = 0; fi < rows; fi++) {
        for (fj = 0; fj < cols; fj++) {
            printf("%d\t", fx[fi][fj]);
        }
        printf("\n"); // Newline after each row
    }
}

/*
Function:
convert2transpose

Purpose:
- Computes the transpose of a 2D array and prints it.

Parameters:
- fx: The original 2D array to transpose.

Logic:
- Uses a nested loop to swap rows and columns, storing the result in `ftx`.
- Calls `print2Darray` to display the transposed matrix.
*/
void convert2transpose(int fx[ROWSIZE][COLSIZE]) {
    int ftx[COLSIZE][ROWSIZE]; // Transpose matrix
    int fi, fj; // Loop variables

    // Transpose logic: Swap rows and columns
    for (fi = 0; fi < ROWSIZE; fi++) {
        for (fj = 0; fj < COLSIZE; fj++) {
            ftx[fj][fi] = fx[fi][fj];
        }
    }

    // Print the transpose
    print2Darray(COLSIZE, ROWSIZE, ftx);
}

/*
Sample Output:
---------------
Original 2D array:
1   2   0
3   4   5

Initialized transpose 2D array:
0   0
0   0
0   0

Transpose of the 2D array:
1   3
2   4
0   5
*/

/*
Notes:
1. Ensure proper initialization of matrices to avoid undefined behavior.
2. Customize dimensions (ROWSIZE, COLSIZE) for other matrix sizes.
*/
