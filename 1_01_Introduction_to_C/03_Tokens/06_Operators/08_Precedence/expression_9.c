/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates the compound assignment operator in C programming.
    It evaluates the expression a %= (b + c) to illustrate the usage of the compound assignment operator %=.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 21, 7, and 2 respectively. 
    It evaluates the expression a %= (b + c) and stores the result in the variable 'result'.

    Explanation of Compound Assignment Expression:
    - a %= (b + c): The compound assignment operator %= performs the modulus operation on 'a' with the result of (b + c).
    - (b + c) computes the sum of 'b' (7) and 'c' (2), resulting in 9.
    - a %= (b + c) calculates the modulus of 'a' (21) with the sum (9), which is 3.
    - The value of 'a' after the operation is 3, and that value is assigned to the variable 'result'.


    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com


*/

#include <stdio.h>

int main() {
    int a = 21;
    int b = 7;
    int c = 2;

    // Compound assignment expression explanation incorporated in comments
    int result = a %= (b + c); // Compound assignment expression a %= (b + c)

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is

/*

result is : 3

Explanation of the Compound Assignment Expression:
- Initial values: a = 21, b = 7, c = 2

Step-by-Step Evaluation:
1. `(b + c)`: The expression inside the parentheses is evaluated first.
   - `b + c` results in `7 + 2`, which equals `9`.

2. `a %= (b + c)`: The compound assignment `%=` operator takes the value of `a` and applies the modulus operation with `9`.
   - This means `a = a % 9`.
   - Since `21 % 9` results in a remainder of `3`, `a` is updated to `3`.

3. `result = a %= (b + c)`:
   - The expression `a %= (b + c)` not only updates `a` but also assigns the final value of `a` (which is now `3`) to `result`.

Final values after the expression:
- `result = 3`
- `a = 3` (after the modulus operation)
- `b` and `c` remain unchanged, with `b = 7` and `c = 2`.

Summary:
- The program outputs `result is : 3`.

*/