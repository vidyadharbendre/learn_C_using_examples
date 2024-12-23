/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2024  

Purpose:
Display the elements of a 2D matrix using nested loops.

Description:
- The program initializes a 2x3 matrix with predefined values.
- It uses nested loops to iterate through the rows and columns to display each element.

Explanation:
1. **Matrix Initialization**:
   - A 2x3 integer matrix is statically declared and initialized with values.

2. **Matrix Printing**:
   - The program uses nested loops to traverse and print the elements row by row.

3. **Output**:
   - The matrix is displayed in a tabular format for better readability.

Note:
- The matrix size is fixed in this example. To handle dynamic matrices, additional logic for dynamic memory allocation is required.
- Debugging tools like **https://pythontutor.com/c.html#mode=edit** can help visualize 2D array operations in C.

*/

#include <stdio.h>

int main() {
    // Dimensions of the matrix
    int rows = 2, cols = 3;

    // Static 2x3 matrix declaration and initialization
    int matrix[2][3] = {
        {1, 2, 5}, // First row
        {3, 4, 6}  // Second row
    };

    // Display the matrix
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {       // Loop through rows
        for (int j = 0; j < cols; j++) {   // Loop through columns
            printf("%d ", matrix[i][j]);   // Print each element
        }
        printf("\n");                      // Newline after each row
    }

    return 0; // Indicate successful program execution
}

/*
Sample Output:
---------------
Matrix:
1 2 5
3 4 6
*/

/*
Notes:
1. This example uses a statically declared matrix for simplicity.
2. Ensure matrix dimensions match the array initialization to prevent runtime errors.
3. For dynamically sized matrices, consider using pointers and dynamic memory allocation.
*/
