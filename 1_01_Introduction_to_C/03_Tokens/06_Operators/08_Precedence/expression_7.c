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

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com


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

Explanation of Bitwise Expression:
- Initial values: a = 25 (binary: 11001), b = 10 (binary: 01010), c = 3

Step-by-Step Evaluation:
1. `(a ^= b)`: Perform the bitwise XOR operation between `a` and `b`, and assign the result to `a`.
   - Bitwise XOR (^) returns 1 for bits that are different and 0 for bits that are the same.
   - Calculation of `a ^= b` (25 ^ 10):
     - Binary representation of 25: 11001
     - Binary representation of 10: 01010
     - Result of XOR operation: 10011 (binary) = 19 (decimal)
   - After this operation, `a` is updated to 19.

2. `>> c`: Right-shift the updated value of `a` by `c` (3) positions.
   - The binary representation of 19 is 10011.
   - Right-shifting by 3 positions results in 00010 (binary), which is 2 in decimal.

3. Final result: `2` (the output of `(a ^= b) >> c` after performing XOR and then the right shift operation).

*/