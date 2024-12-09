/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 9 December 2024

    Purpose:
    Generate the Fibonacci series using recursion.

    Description:
    The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, starting from 0 and 1.
    This program calculates the Fibonacci series up to a specified number of terms using recursion.

    Steps to Generate Fibonacci Series Recursively:
    1. **Define the Base Cases**:
        - The first Fibonacci number (when `fn == 0`) is 0.
        - The second Fibonacci number (when `fn == 1`) is 1.
    2. **Define the Recursive Case**:
        - For any other number `fn`, the Fibonacci value is the sum of the (fn-1)th and (fn-2)th Fibonacci numbers.
    3. **Recursive Unwinding**:
        - As recursion unwinds, the Fibonacci values are computed step by step and combined to form the series.

    Note:
    - The function parameters and variables use an `f` prefix for clarity, as requested.
*/

#include <stdio.h>

// Function prototype to calculate Fibonacci numbers recursively
int ffibonacci(int fn);

int main() {
    int fterms; // Variable to store the number of terms in the Fibonacci series

    // Step 1: Get the number of terms from the user
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &fterms);

    // Step 2: Display the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", fterms);
    for (int fi = 0; fi < fterms; fi++) {
        printf("%d ", ffibonacci(fi)); // Call the recursive function
    }
    printf("\n");

    return 0;
}

// Recursive function to calculate Fibonacci numbers
int ffibonacci(int fn) {
    // Step 3: Define the base cases
    if (fn == 0) {
        return 0; // The first Fibonacci number is 0
    } else if (fn == 1) {
        return 1; // The second Fibonacci number is 1
    } else {
        // Step 4: Recursive case
        return ffibonacci(fn - 1) + ffibonacci(fn - 2); // Sum of the two preceding Fibonacci numbers
    }
}

/*
Example Output:
Enter the number of terms in the Fibonacci series: 4
Fibonacci series up to 4 terms:
0 1 1 2 

Enter the number of terms in the Fibonacci series: 7
Fibonacci series up to 7 terms:
0 1 1 2 3 5 8 

Enter the number of terms in the Fibonacci series: 10
Fibonacci series up to 10 terms:
0 1 1 2 3 5 8 13 21 34 

*/

/*
    Key Recursive Concepts:
    - **Base Cases**: Handle the first two Fibonacci numbers explicitly to avoid infinite recursion.
    - **Recursive Case**: Decompose the problem into smaller subproblems (fn-1 and fn-2).
    - **Recursive Unwinding**: Compute the Fibonacci values step by step as recursion resolves.

    Time Complexity:
    - Recursive Fibonacci has exponential complexity O(2^n), as it recomputes values for overlapping subproblems.
      For a more efficient solution, consider memoization or iteration.
*/
