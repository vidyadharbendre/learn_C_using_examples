/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    version 1 - 11 December 2023
    version 2 - 9 December 2024

    Purpose:
    Calculate factorial using recursion
    
    Description:
    This program demonstrates the calculation of factorial using a recursive approach.
    Recursion is a technique where a function calls itself, breaking down a problem into smaller sub-problems 
    until reaching a base case, and then combines the results of each sub-problem to solve the larger problem.

    Steps to Implement Recursive Factorial:
    1. **Define the Base Case**:
        - The base case stops the recursion. For factorial, the base case is `factorial(1) = 1`.
    2. **Define the Recursive Case**:
        - For `n > 1`, calculate factorial as `n * factorial(n - 1)`. The function calls itself with a decremented value of `n`.
    3. **Recursive Unwinding**:
        - The recursive calls stack up until the base case is reached. Then, the results are returned and multiplied as the recursion unwinds.
    4. **Implement Input and Output**:
        - Use an input function to retrieve the number from the user, and print the result after calculation.
*/

#include <stdio.h>

// Function prototype for getting user input
int getInput();

// Function prototype for calculating factorial recursively
int calculateFactorial_Recursive(int fnum);

int main() {
    int num;        // Variable to hold the user input
    long factorial; // Variable to hold the calculated factorial

    // Step 1: Get the input from the user
    num = getInput();

    // Step 2: Display the entered number
    printf("The factorial of the entered number is: %d\n", num);

    // Step 3: Calculate factorial using recursion
    factorial = calculateFactorial_Recursive(num);

    // Step 4: Display the calculated factorial
    printf("Factorial: %ld\n", factorial);

    return 0;
}

// Function to get user input
int getInput() {
    int fnum;
    printf("Enter a number: ");
    scanf("%d", &fnum);
    return fnum; // Return the entered number
}

// Recursive function to calculate factorial
int calculateFactorial_Recursive(int fnum) {
    int fproduct = 1;

    // Step 5: Define the base case
    if (fnum == 1) {
        return 1; // Base case: factorial of 1 is 1
    } else {
        // Step 6: Recursive call to calculate factorial
        // Multiply the current number by the factorial of the previous number
        fproduct = fnum * calculateFactorial_Recursive(fnum - 1);
        return fproduct; // Return the accumulated product
    }
}

/*
Example Output:
Enter a number: 5
The factorial of the entered number is: 5
Factorial: 120
*/

/*
    Key Recursive Concepts:
    - **Base Case**: When `fnum == 1`, the recursion stops and returns 1.
    - **Recursive Call**: The function calls itself with `fnum - 1` to calculate smaller sub-problems.
    - **Unwinding**: Once the base case is reached, the recursive calls resolve by multiplying the results.
    
    Recursive Flow for Factorial(5):
    - Call Stack: 
        calculateFactorial_Recursive(5) 
            → 5 * calculateFactorial_Recursive(4)
                → 4 * calculateFactorial_Recursive(3)
                    → 3 * calculateFactorial_Recursive(2)
                        → 2 * calculateFactorial_Recursive(1)
                            → Base Case: 1
    - Unwinding:
        2 * 1 = 2
        3 * 2 = 6
        4 * 6 = 24
        5 * 24 = 120
    - Final Output: 120
*/

