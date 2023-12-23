#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS]);
void displayMatrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    inputMatrix(matrix); // Call the function to input matrix values
    displayMatrix(matrix); // Call the function to display the matrix

    return 0;
}

// Function to input values for the matrix
void inputMatrix(int matrix[ROWS][COLS]) {
    printf("Enter %d elements for a %dx%d matrix:\n", ROWS * COLS, ROWS, COLS);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]); // Taking input for each element
        }
    }
}

// Function to display the matrix
void displayMatrix(int matrix[ROWS][COLS]) {
    printf("\nThe matrix is:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]); // Displaying elements of the matrix
        }
        printf("\n");
    }
}