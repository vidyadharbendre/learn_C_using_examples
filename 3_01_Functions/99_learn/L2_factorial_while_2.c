/*
    Program Name: FactorialCalculatorUsingWhile.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program calculates the factorial of a given non-negative integer using 
    a `while` loop. It takes an integer as input from the user and handles edge cases, 
    such as when the input is negative. If the input is valid, the program calculates 
    the factorial iteratively and displays the result.

    Version History:
    Version 1.0 - [Date: 2024-11-26] - Initial version with PythonTutor.com note 
    for visualizing C programs on mobile.

    Note:
    To understand how the program executes step by step, visit https://pythontutor.com. 
    PythonTutor supports visualizing C code execution, showing the flow of loop 
    iterations and variable assignments.
*/

#include <stdio.h>

int main() {
    // Variable declarations
    int number, result = 1, i = 1;

    // Input: Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle edge case: Factorial is not defined for negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a while loop
        while (i <= number) {
            result *= i; // Multiply result by the current value of i
            i++;         // Increment i for the next iteration
        }

        // Display the factorial result
        printf("Factorial of %d is: %d\n", number, result);
    }

    return 0; // Indicate successful program execution
}

// The output of the above program is shown as below:
/*
Enter a number: 5
Factorial of 5 is: 120
*/
