/*
    Name of the Program: First 10 Odd Numbers Printer
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program prints the first 10 odd numbers using a while loop.

    Version History:
        Version 1.0 - [Date: 2024-11-13] - Initial version to print the first 10 odd numbers.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int count = 0;   // Counter to track the number of odd numbers printed
    int number = 1;  // Current number being checked

    // Print a header
    printf("First 10 Odd Numbers:\n");

    // Loop to print the first 10 odd numbers
    while (count < 10) {
        if (number % 2 != 0) { // Check if the number is odd
            printf("%d ", number);
            count++;          // Increment the counter for odd numbers
        }
        number++;              // Move to the next number
    }

    printf("\n"); // New line for better formatting
    return 0;
}

/*
    Compilation command: gcc oddNumbers.c -o oddNumbers
    Execution command: ./oddNumbers

    Example Output:

    First 10 Odd Numbers:
    1 3 5 7 9 11 13 15 17 19
*/
