/*
    Name of the Program: Repeated Number Pattern Printing Using While Loop
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints a pattern using a nested while loop. 
    The pattern consists of increasing rows of numbers, where:
    - Row 1 prints "1"
    - Row 2 prints "2 2"
    - Row 3 prints "3 3 3"
    - and so on until the specified number of rows.

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
        
        // Inner while loop to print numbers for the current row
        while (col <= row) {
            printf("%d ", row); // Print the current row number
            col++; // Move to the next column
        }
        
        printf("\n"); // Move to the next row
        row++; // Increment the row counter
    }
    
    return 0;
}

/*
    Compilation command: gcc repeatedNumberPattern.c -o repeatedNumberPattern
    Execution command: ./repeatedNumberPattern

    Example Outputs:

    Case 1:
    Number of rows: 3
    1
    2 2
    3 3 3

    Case 2:
    Number of rows: 4
    1
    2 2
    3 3 3
    4 4 4 4

    Case 3:
    Number of rows: 5
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
