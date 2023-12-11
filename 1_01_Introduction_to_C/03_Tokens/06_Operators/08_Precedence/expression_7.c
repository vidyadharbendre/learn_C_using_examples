/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates bitwise operations in C programming.
    It evaluates the expression (a ^= b) >> c to illustrate how bitwise XOR and right shift operations work in C.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 25, 10, and 3 respectively. 
    It evaluates the bitwise expression (a ^= b) >> c and stores the result in the variable 'result'.

    Explanation of Bitwise Expression:
    - (a ^= b): Bitwise XOR operation between 'a' and 'b'.
      - a ^= b performs a bitwise XOR between 'a' and 'b' and assigns the result to 'a'.
      - Bitwise XOR returns 1 for bits that are different and 0 for bits that are the same.

    - >> c: Right shift 'a' by 'c' positions.
      - >> represents the right shift operator, which shifts the bits in 'a' to the right by 'c' positions.

    - The entire expression (a ^= b) >> c evaluates the bitwise XOR of 'a' and 'b', and then right-shifts the result by 'c' positions.

*/

#include <stdio.h>

int main() {
    int a = 25;
    int b = 10;
    int c = 3;

    // Bitwise expression explanation incorporated in comments
    int result = (a ^= b) >> c; // Bitwise expression ((a ^= b) >> c)

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 2

*/