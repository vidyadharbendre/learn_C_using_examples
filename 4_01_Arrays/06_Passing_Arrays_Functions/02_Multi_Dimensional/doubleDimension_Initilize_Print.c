#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int arr[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    printMatrix(matrix); // Passing the 2D array to the function
    return 0;
}

void printMatrix(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]); // Printing all elements of the 2D array
        }
        printf("\n");
    }
}

// The output of the above program is shown below:
/* . 
1 2 3 
4 5 6 
7 8 9 
*/