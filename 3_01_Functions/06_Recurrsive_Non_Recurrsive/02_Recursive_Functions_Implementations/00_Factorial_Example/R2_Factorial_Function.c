/*
 * Factorial Calculation Program
 *
 * Description:
 * This program calculates the factorial of a given non-negative integer using an iterative approach.
 * The factorial of a number `n` (denoted as `n!`) is the product of all positive integers from 1 to `n`.
 * 
 * Formula:
 * n! = 1 × 2 × 3 × ... × n
 * Special Case:
 * - 0! = 1 (By definition)
 * 
 * Program Structure:
 * 1. **User Input**: A separate function (`getInput`) is used to retrieve the number from the user.
 * 2. **Factorial Calculation**: The factorial is computed iteratively using a loop in the `calculateFactorial` function.
 * 3. **Output**: The program displays the factorial of the entered number.
 * 
 * Input:
 * A single non-negative integer entered by the user.
 * 
 * Output:
 * The factorial of the entered number.
 * 
 * Example:
 * Input:
 *   Enter a number: 5
 * Output:
 *   The factorial of the entered number is 5
 *   120
 * 
 * Complexity:
 * - Time Complexity: O(n), where `n` is the entered number.
 * - Space Complexity: O(1), as no additional data structures are used.
 * 
 * Program Objective:
 * To demonstrate modular programming and iterative computation for solving a mathematical problem.
 */

#include <stdio.h>

// Function prototype for getting user input
int getInput();

// Function prototype for factorial calculation
int calculateFactorial(int fnum);

// Main function
int main() {
    int num;        // Variable to store user input
    long factorial; // Variable to store calculated factorial

    // Call getInput function to retrieve user input
    num = getInput();

    // Display the entered number
    printf("The factorial of the entered number is: %d\n", num);

    // Calculate the factorial using the calculateFactorial function
    factorial = calculateFactorial(num);

    // Print the factorial
    printf("Factorial: %ld\n", factorial);

    return 0;
}

// Function to get user input
int getInput() {
    int fnum; // Variable to hold the input number
    printf("Enter a number: ");
    scanf("%d", &fnum);
    return fnum; // Return the entered number
}

// Function to calculate factorial
int calculateFactorial(int fnum) {
    int fi;          // Loop counter
    long fproduct = 1; // Variable to store the product

    // Special case: Factorial of 0 or 1 is 1
    if (fnum <= 1) {
        return 1;
    } else {
        // Calculate factorial using a loop
        for (fi = 1; fi <= fnum; fi++) {
            fproduct = fproduct * fi;
        }
        return fproduct; // Return the calculated factorial
    }
}

/*
 * Output Example:
 * Enter a number: 5
 * The factorial of the entered number is: 5
 * Factorial: 120
 */
