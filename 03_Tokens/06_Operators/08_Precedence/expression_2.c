/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023
    
    Purpose: 
    This C program serves as a basic template to showcase a simple arithmetic calculation and print the result.
    The program demonstrates the use of arithmetic operators and showcases the order of precedence in calculations.
*/

#include <stdio.h>

int main() {
    // This is a simple C program that performs arithmetic operations.
    int a = 10;
    int b = 3;
    int c = 4;

    // Perform arithmetic operations with defined variables
    int result = a / b + c - 2 * a; // Order of precedence: Multiplication/Division > Addition/Subtraction

    printf("result is :%d\n", result); // Print the result of the arithmetic operation

    // Return 0 to indicate successful execution.
    return 0;
}

// The output of the above program is:

/*
result is : -13

Explanation of Arithmetic Expression:
- The arithmetic expression (a / b + c - 2 * a) is evaluated based on the order of precedence:
    1. 2 * a is calculated first, resulting in 20.
    2. a / b is computed next, yielding 3.
    3. c - 20 is then evaluated, resulting in -16.
    4. Finally, the addition of 3 to -16 (-16 + 3) gives the final result of -13.
*/
