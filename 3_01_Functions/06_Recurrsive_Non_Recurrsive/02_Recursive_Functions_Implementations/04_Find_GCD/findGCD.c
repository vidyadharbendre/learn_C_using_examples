/*
 * GCD Calculation Using Recursion
 *
 * Description:
 * The Greatest Common Divisor (GCD) of two integers is the largest integer that divides both numbers 
 * without leaving a remainder. This program uses a recursive approach to calculate the GCD of two integers.
 *
 * Algorithm:
 * 1. If `b == 0`, the GCD is `a` (Base Case).
 * 2. Otherwise, compute the remainder `r = a % b`.
 * 3. Call the GCD function recursively with `gcd(b, r)`.
 * 4. Repeat until the remainder becomes 0.
 *
 * Mathematical Concept:
 * The Euclidean algorithm is based on the principle:
 *   gcd(a, b) = gcd(b, a % b)
 * When `b == 0`, `gcd(a, b)` equals `a`.
 *
 * Input:
 * Two positive integers `a` and `b` provided by the user.
 *
 * Output:
 * The program prints the GCD of the given two integers.
 *
 * Example:
 * Input:
 *   Enter two numbers: 62 8
 * Output:
 *   GCD of 62 and 8 is 2
 *
 * Complexity:
 * - Time Complexity: O(log(min(a, b))) 
 *   (Each recursive call reduces the problem size significantly).
 * - Space Complexity: O(log(min(a, b))) 
 *   (Due to the recursive function call stack).
 *
 * Program Objective:
 * Demonstrate the use of recursion to solve a mathematical problem (GCD) efficiently.
 */

#include <stdio.h>

// Function to calculate GCD using recursion - Declaration
int gcd(int a, int b);

// Main function
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd function and display the result
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function to calculate GCD using recursion - Definition
int gcd(int a, int b) {
    int remainder = a % b; 
    // Base case
    if (remainder == 0) {
        return b;
    } else {
        // Recursive case
        return gcd(b, remainder);
    }
}

/*
 * Output Example:
 * Enter two numbers: 62 8
 * GCD of 62 and 8 is 2
 */
