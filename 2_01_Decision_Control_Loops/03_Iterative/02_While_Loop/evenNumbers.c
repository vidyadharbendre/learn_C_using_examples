/*
    Name of the Program: First 10 Even Numbers Printer
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints the first 10 even numbers using a while loop.

    Version History:
        Version 1.0 - [Date: 2024-11-13] - Initial version to print the first 10 even numbers.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int count = 0;   // Counter to track the number of even numbers printed
    int number = 2;  // First even number

    // Print a header
    printf("First 10 Even Numbers:\n");

    // Loop to print the first 10 even numbers
    while (count < 10) {
        printf("%d ", number); // Print the current even number
        number += 2;           // Move to the next even number
        count++;               // Increment the counter
    }

    printf("\n"); // New line for better formatting
    return 0;
}

/*
    Compilation command: gcc evenNumbers.c -o evenNumbers
    Execution command: ./evenNumbers

    Example Output:

    First 10 Even Numbers:
    2 4 6 8 10 12 14 16 18 20
*/
