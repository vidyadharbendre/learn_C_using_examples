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
    The program initializes three integer variables `a`, `b`, and `c` with values 5, 3, and 2 respectively. 
    It then performs the arithmetic operation `a + b * c` and stores the result in the variable `result`.

    The expression `b * c` is evaluated first due to the higher precedence of the multiplication (*) operator over addition (+). 
    The result of the multiplication (3 * 2 = 6) is then added to `a`, resulting in `11`. 
    Finally, the program prints the result to the console using the `printf` function.

    This simple demonstration provides insight into operator precedence in C programming, emphasizing how to compute arithmetic expressions based on the precedence rules.
*/

#include <stdio.h>
int main() {
    // This is a simple C program that serves as a template.
    int a = 5;
    int b = 3;
    int c = 2;
    int result = a + b * c; // Arithmetic expression a + b * c

    printf("result is :%d\n", result); // Print the result of the arithmetic operation

    // Return 0 to indicate successful execution.
    return 0;
}

// The output of the above program is:

/*
result is :11

Explanation of Arithmetic Expression:
- The arithmetic expression (a + b * c) is evaluated based on the order of precedence:
    1. b * c is calculated first due to the higher precedence of the multiplication (*) operator.
    2. The result of the multiplication (3 * 2 = 6) is then added to 'a' (5), resulting in 11.
*/
