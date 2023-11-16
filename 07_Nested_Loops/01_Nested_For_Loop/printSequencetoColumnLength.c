/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    16th November, 2023

    Purpose:
    To accept the number of rows and columns from the user and print a matrix with a sequence of integers corresponding to the column length.

    Description:
    This C program prompts the user to enter the number of rows and columns. It then uses nested loops to generate a matrix with a sequence of integers, following the specified number of rows and columns entered by the user. The integer sequence matrix is displayed as output on the console.

    It utilizes nested loops to iterate through the rows and columns, printing integers corresponding to the column length for each element. After printing each row, a newline character is included to move to the next row. The result is a matrix displaying a sequence of integers for each column.
*/

#include <stdio.h>

int main() {
    int rows, cols;

    // Accept rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Loop through each column
        for (int j = 1; j <= cols; j++) {
            // Print the current column number
            printf("%d ", j);
        }
        // Move to the next line after printing a row
        printf("\n");
    }

    return 0;
}

// The output of the program is shwon as below

/*

Enter the number of rows: 4
Enter the number of columns: 7
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 

*/