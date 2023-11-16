/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    16th November, 2023

    Purpose:
    To accept the number of rows and columns from the user and print an asterisk matrix based on the provided dimensions.

    Description:
    This C program prompts the user to enter the number of rows and columns. It then uses nested loops to generate a matrix of asterisks (*), following the specified number of rows and columns entered by the user. The asterisk matrix is displayed as output on the console.

    It utilizes nested loops to iterate through the rows and columns, printing an asterisk followed by a space for each element. After printing each row, a newline character is included to move to the next row. The result is a visual representation of the given rows and columns filled entirely with asterisks.
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
    for (int i = 0; i < rows; i++) {
        // Loop through each column
        for (int j = 0; j < cols; j++) {
            // Print an asterisk followed by a space
            printf("* ");
        }
        // Move to the next line after printing a row
        printf("\n");
    }

    return 0;
}

// The output of the program is shown as below
/*

Enter the number of rows: 5
Enter the number of columns: 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/