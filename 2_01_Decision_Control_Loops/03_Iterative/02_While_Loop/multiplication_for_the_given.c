/*
    Name of the Program: Multiplication Table Generator (Hardcoded Limit)
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program generates a multiplication table for a user-specified number 
    up to a hardcoded limit of 10 using a while loop.

    Version History:
        Version 1.2 - [Date: 2024-11-13] - Hardcoded limit of 10 implemented.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int number;    // The number for which the multiplication table is generated
    int limit = 10; // Hardcoded limit for the table
    int multiplier = 1; // Multiplier starts from 1

    // Input from the user
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    // Generate the multiplication table
    printf("\nMultiplication Table for %d (up to %d):\n", number, limit);
    while (multiplier <= limit) {
        printf("%d x %d = %d\n", number, multiplier, number * multiplier);
        multiplier++; // Increment the multiplier
    }

    return 0;
}

/*
    Compilation command: gcc multiplicationTable.c -o multiplicationTable
    Execution command: ./multiplicationTable

    Example Outputs:

    Case 1:
    Enter the number for the multiplication table: 7

    Multiplication Table for 7 (up to 10):
    7 x 1 = 7
    7 x 2 = 14
    7 x 3 = 21
    7 x 4 = 28
    7 x 5 = 35
    7 x 6 = 42
    7 x 7 = 49
    7 x 8 = 56
    7 x 9 = 63
    7 x 10 = 70

    Case 2:
    Enter the number for the multiplication table: 9

    Multiplication Table for 9 (up to 10):
    9 x 1 = 9
    9 x 2 = 18
    9 x 3 = 27
    9 x 4 = 36
    9 x 5 = 45
    9 x 6 = 54
    9 x 7 = 63
    9 x 8 = 72
    9 x 9 = 81
    9 x 10 = 90
*/
