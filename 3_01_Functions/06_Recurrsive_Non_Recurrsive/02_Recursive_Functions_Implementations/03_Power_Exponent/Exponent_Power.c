/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 11 December 2023
    Version 2 - 9 December 2024
    
    Purpose:
    Calculate power using recursion
    
    Description:
    This program calculates the result of raising a base number to a given exponent using recursion.
    Recursion is employed to repeatedly multiply the base with the result of the base raised to one less
    than the current exponent, until the exponent becomes 0, which is the base case.

    Steps to Implement Recursive Power Calculation:
    1. **Define the Base Case**:
        - Any number raised to the power of 0 is 1 (`base^0 = 1`).
    2. **Define the Recursive Case**:
        - For `exponent > 0`, calculate `base^exponent` as `base * base^(exponent-1)`.
    3. **Recursive Unwinding**:
        - The recursive calls stack up until the base case is reached. Then, the results are multiplied together as the recursion unwinds.
    4. **Implement Input and Output**:
        - Use input to retrieve the base and exponent from the user, and print the result after calculation.
*/

#include <stdio.h>

// Function prototype to calculate power using recursion
int power(int base, int exponent);

// Main function
int main() {
    int base, exponent; // Variables to store user input

    // Step 1: Get the base number from the user
    printf("Enter base number: ");
    scanf("%d", &base);

    // Step 2: Get the exponent from the user
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Step 3: Calculate the result using the recursive power function
    int result = power(base, exponent);

    // Step 4: Display the result
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}

// Recursive function to calculate power
int power(int base, int exponent) {
    // Step 5: Define the base case
    if (exponent == 0) {
        return 1; // Any number raised to the power of 0 is 1
    } else {
        // Step 6: Recursive case to calculate power
        // Multiply the base by the result of base^(exponent-1)
        return base * power(base, exponent - 1);
    }
}

/*
Example Output:
Enter base number: 6
Enter exponent: 3
6 raised to the power of 3 is 216

Enter base number: 2
Enter exponent: 4
2 raised to the power of 4 is 16
*/

/*
    Key Recursive Concepts:
    - **Base Case**: When `exponent == 0`, the recursion stops and returns 1.
    - **Recursive Call**: The function calls itself with `exponent - 1` to solve the smaller sub-problem.
    - **Unwinding**: Once the base case is reached, the recursive calls resolve by multiplying the results.

    Recursive Flow for Power(6, 3):
    - Call Stack: 
        power(6, 3)
            → 6 * power(6, 2)
                → 6 * (6 * power(6, 1))
                    → 6 * (6 * (6 * power(6, 0)))
                        → Base Case: 1
    - Unwinding:
        6 * 1 = 6
        6 * 6 = 36
        6 * 36 = 216
    - Final Output: 216

    Recursive Flow for Power(2, 4):
    - Call Stack:
        power(2, 4)
            → 2 * power(2, 3)
                → 2 * (2 * power(2, 2))
                    → 2 * (2 * (2 * power(2, 1)))
                        → 2 * (2 * (2 * (2 * power(2, 0))))
                            → Base Case: 1
    - Unwinding:
        2 * 1 = 2
        2 * 2 = 4
        2 * 4 = 8
        2 * 8 = 16
    - Final Output: 16
*/
