/*
    Name of the Program: Alphabet Pattern Printing Using While Loop
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints a pattern using a nested while loop. 
    The pattern consists of increasing rows of alphabets, where:
    - Row 1 prints "A"
    - Row 2 prints "A B"
    - Row 3 prints "A B C"
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
        
        // Inner while loop to print alphabets for the current row
        while (col <= row) {
            printf("%c ", 'A' + col - 1); // Print the current column's alphabet
            col++; // Move to the next column
        }
        
        printf("\n"); // Move to the next row
        row++; // Increment the row counter
    }
    
    return 0;
}

/*
    Compilation command: gcc alphabetPattern.c -o alphabetPattern
    Execution command: ./alphabetPattern

    Example Outputs:

    Case 1:
    Number of rows: 3
    A
    A B
    A B C

    Case 2:
    Number of rows: 4
    A
    A B
    A B C
    A B C D

    Case 3:
    Number of rows: 5
    A
    A B
    A B C
    A B C D
    A B C D E
*/
