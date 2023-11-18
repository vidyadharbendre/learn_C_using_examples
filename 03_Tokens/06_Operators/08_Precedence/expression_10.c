/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates bitwise shift operators in C programming.
    It evaluates the expression (a >> b) * (c << 1) to showcase how right shift and left shift operations work in C.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 17, 4, and 2 respectively. 
    It evaluates the expression (a >> b) * (c << 1) and stores the result in the variable 'result'.

    Explanation of Bitwise Shift Expression:
    - (a >> b): Right shift 'a' by 'b' positions. Right shifting 'a' (17) by 4 positions results in 1.
    - (c << 1): Left shift 'c' by 1 position. Left shifting 'c' (2) by 1 position results in 4.
    - (a >> b) * (c << 1): Multiplication of the results of the right shift and left shift operations.
    - The result is 1 * 4, which equals 4.
    - The value 4 is assigned to the variable 'result'.

*/

#include <stdio.h>

int main() {
    int a = 17;
    int b = 4;
    int c = 2;

    // Bitwise shift expression explanation incorporated in comments
    int result = (a >> b) * (c << 1); // Bitwise shift expression ((a >> b) * (c << 1))

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is

/*

result is : 4

*/