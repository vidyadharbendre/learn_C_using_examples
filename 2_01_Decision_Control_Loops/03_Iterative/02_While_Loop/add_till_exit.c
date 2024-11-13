/*
 * Program: Sum of Numbers Until -1
 * Author: Vidyadhar Bendre
 * Date: 13 November 2024
 * Description: This program calculates the sum of numbers entered by the user 
 * until the user inputs -1. The program terminates when -1 is encountered.
 */

#include <stdio.h>

int main() {
    // Declare variables
    int number;      // To store the current input number
    int sum = 0;     // To store the cumulative sum of numbers

    // Program explanation to the user
    printf("Enter numbers to calculate their sum (enter -1 to stop):\n");
    
    // Loop to repeatedly accept input and calculate sum
    while (1) { // Infinite loop, will terminate on specific condition
        scanf("%d", &number); // Read user input

        if (number == -1) { 
            // Break the loop if the input is -1
            break;
        }

        // Add the number to the cumulative sum
        sum += number;
    }

    // Display the result
    printf("Sum of entered numbers: %d\n", sum);

    // Indicate program has terminated
    return 0;
}
