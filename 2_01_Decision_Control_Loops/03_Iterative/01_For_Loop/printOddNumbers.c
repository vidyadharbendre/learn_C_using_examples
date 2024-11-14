/*
    Name of the Program: First 10 Odd Numbers Printer (Using For Loop)
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints the first 10 odd numbers using a for loop.

    Version History:
        Version 1.0 - [Date: 2024-11-13] - Initial version to print the first 10 odd numbers.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int count = 0; // Counter to track the number of odd numbers printed

    // Print a header
    printf("First 10 Odd Numbers:\n");

    // For loop to print the first 10 odd numbers
    for (int number = 1; count < 10; number++) {
        if (number % 2 != 0) { // Check if the number is odd
            printf("%d ", number);
            count++;          // Increment the counter for odd numbers
        }
    }

    printf("\n"); // New line for better formatting
    return 0;
}

/*
    Compilation command: gcc printOddNumbers.c -o printOddNumbers
    Execution command: ./printOddNumbers

    Example Output:

    First 10 Odd Numbers:
    1 3 5 7 9 11 13 15 17 19
*/
