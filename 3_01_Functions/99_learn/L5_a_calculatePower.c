/*
    Program Name: ExponentiationCalculator.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program calculates the result of raising a base to an exponent using a `for` loop. 
    It takes two inputs from the user: the base and the exponent. The program checks if the 
    exponent is non-negative and calculates the result if valid. If the exponent is negative, 
    it displays an error message.

    Version History:
    Version 1.0 - [Date: 2024-11-26] - Initial version with PythonTutor.com note 
    for visualizing C programs on mobile.

    Note:
    To understand how the program executes step by step, visit https://pythontutor.com. 
    PythonTutor supports visualizing C code execution, showing the loop iterations 
    and variable updates.
*/

#include <stdio.h>

int main() {
    // Variable declarations
    int base, exponent, result = 1;

    // Input: Prompt the user to enter the base
    printf("Enter the base: ");
    scanf("%d", &base);

    // Input: Prompt the user to enter the exponent
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Handle edge case: Exponent should be non-negative
    if (exponent < 0) {
        printf("Exponent should be non-negative.\n");
    } else {
        // Calculate base raised to the power of exponent using a for loop
        for (int i = 0; i < exponent; i++) {
            result *= base; // Multiply result by the base in each iteration
        }

        // Output: Display the result
        printf("Result: %d\n", result);
    }

    return 0; // Indicate successful program execution
}

// The output of the above program is shown as below:
/*
Enter the base: 5
Enter the exponent: 3
Result: 125
*/
