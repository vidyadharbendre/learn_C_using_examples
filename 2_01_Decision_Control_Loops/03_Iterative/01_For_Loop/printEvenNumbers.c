/*
    Name of the Program: First 10 Even Numbers Printer (Using For Loop)
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints the first 10 even numbers using a for loop.

    Version History:
        Version 1.0 - [Date: 2024-11-13] - Modified to print the first 10 even numbers.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int count = 0; // Counter to track the number of even numbers printed

    // Print a header
    printf("First 10 Even Numbers:\n");

    // For loop to print the first 10 even numbers
    for (int number = 1; count < 10; number++) {
        if (number % 2 == 0) { // Check if the number is even
            printf("%d ", number);
            count++;          // Increment the counter for even numbers
        }
    }

    printf("\n"); // New line for better formatting
    return 0;
}

/*
    Compilation command: gcc printEvenNumbers.c -o printEvenNumbers
    Execution command: ./printEvenNumbers

    Example Output:

    First 10 Even Numbers:
    2 4 6 8 10 12 14 16 18 20
*/
