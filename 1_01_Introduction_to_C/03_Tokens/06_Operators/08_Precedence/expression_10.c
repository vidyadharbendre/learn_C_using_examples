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

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com



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


Step-by-Step Evaluation:
1. `a >> b`: Right shift operation on `a` by `b` positions.
   - In binary, `17` is represented as `0001 0001`.
   - Shifting `17` right by `4` positions (17 >> 4) gives:
     - `0000 0001`, which is `1` in decimal.
   - So, `a >> b` results in `1`.

2. `c << 1`: Left shift operation on `c` by `1` position.
   - In binary, `2` is represented as `0000 0010`.
   - Shifting `2` left by `1` position (c << 1) gives:
     - `0000 0100`, which is `4` in decimal.
   - So, `c << 1` results in `4`.

3. `(a >> b) * (c << 1)`:
   - The result of `a >> b` is `1`, and the result of `c << 1` is `4`.
   - Multiplying these two results: `1 * 4 = 4`.

Final values after the expression:
- `result = 4`
- Variables `a`, `b`, and `c` remain unchanged, with `a = 17`, `b = 4`, and `c = 2`.

Summary:
- The program outputs `result is : 4`.

*/