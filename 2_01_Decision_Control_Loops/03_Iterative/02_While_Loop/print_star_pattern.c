/*
    Name of the Program: Pattern Printing Using While Loop
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints a pattern using a nested while loop. 
    The pattern consists of increasing rows of asterisks ('*'), where the 
    first row contains one '*', the second row contains two '*', and so on 
    until the specified number of rows.

    Version History:
        Version 1.0 - [Date: 2024-11-13] - Initial version implemented.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int n = 3;      // Number of rows for the pattern
    int row = 1;    // Initialize the row counter

    // Outer while loop to iterate through rows
    while (row <= n) {
        int col = 1; // Initialize the column counter
        
        // Inner while loop to print '*' for the current row
        while (col <= row) {
            printf("*");
            col++; // Move to the next column
        }
        
        printf("\n"); // Move to the next row
        row++; // Increment the row counter
    }
    
    return 0;
}

/*
    Compilation command: gcc patternPrinting.c -o patternPrinting
    Execution command: ./patternPrinting

    Example Outputs:

    Case 1:
    Number of rows: 3
    *
    **
    ***

    Case 2:
    Number of rows: 5
    *
    **
    ***
    ****
    *****

    Case 3:
    Number of rows: 1
    *
*/
