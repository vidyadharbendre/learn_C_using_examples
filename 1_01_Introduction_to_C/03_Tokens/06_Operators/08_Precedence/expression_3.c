/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program aims to serve as a simple template demonstrating arithmetic operations in C programming. It showcases how basic arithmetic expressions are evaluated in C.

    Description:
    The program initializes three integer variables `a`, `b`, and `c` with values 7, 2, and 4 respectively. 
    It then performs the arithmetic operation `a * b % c` and stores the result in the variable `result`.

    The expression `a * b % c` involves multiplication (*) and modulo (%) operators.
    According to the operator precedence, multiplication is performed first, followed by the modulo operation.
    The result of the multiplication (7 * 2 = 14) is then divided by `c` (4), resulting in the remainder of 2.
    Finally, the program prints the result to the console using the `printf` function.

    This simple demonstration provides insight into operator precedence in C programming, emphasizing how to compute arithmetic expressions based on the precedence rules.
*/

#include <stdio.h>
int main() {
    // This is a simple C program that serves as a template.
    int a = 7;
    int b = 2;
    int c = 4;
    int result = a * b % c; // Arithmetic expression a * b % c

    printf("result is :%d\n", result); // Print the result of the arithmetic operation

    // Return 0 to indicate successful execution.
    return 0;
}

// The output of the above program is:

/*
result is :2

Explanation of Arithmetic Expression:
- The arithmetic expression (a * b % c) involves multiplication (*) and modulo (%) operators.
- According to the operator precedence, multiplication (7 * 2 = 14) is performed first.
- The result of the multiplication (14) is then divided by 'c' (4) using the modulo operator (%), resulting in the remainder of 2.
*/
