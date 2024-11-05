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
    The program initializes three integer variables `a`, `b`, and `c` with values 12, 5, and 2 respectively. 
    It then performs the arithmetic operation `a - b / c + b % c` and stores the result in the variable `result`.

    The expression `a - b / c + b % c` involves subtraction (-), division (/), and modulo (%) operators.
    According to the operator precedence, division and modulo have higher precedence over addition/subtraction.
    Therefore, `b / c` is computed first, resulting in `2` (integer division).
    The modulo operation `b % c` yields the remainder of `1`.
    Finally, the program performs the subtraction `a - 2 + 1` and stores the result `11` in the variable `result`.
    The program prints the result to the console using the `printf` function.

    This simple demonstration provides insight into operator precedence in C programming, emphasizing how to compute arithmetic expressions based on the precedence rules.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>
int main() {
    // This is a simple C program that serves as a template.
    int a = 12;
    int b = 5;
    int c = 2;
    int result = a - b / c + b % c; // Arithmetic expression a - b / c + b % c

    printf("result is :%d\n", result); // Print the result of the arithmetic operation

    // Return 0 to indicate successful execution.
    return 0;
}

// The output of the above program is:

/*
result is :11

Explanation of Arithmetic Expression:
- The arithmetic expression (a - b / c + b % c) involves subtraction (-), division (/), and modulo (%) operators.
- According to the operator precedence, division and modulo have higher precedence over addition/subtraction.
- The result of `b / c` is calculated first, resulting in `2` (integer division).
- The modulo operation `b % c` yields the remainder of `1`.
- Finally, the program performs the subtraction `a - 2 + 1`, resulting in `11`.
*/
