/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates the conditional operator (ternary operator) in C programming.
    It evaluates the expression (a > b) ? a++ : c-- to showcase the usage of the ternary conditional operator.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 8, 3, and 5 respectively. 
    It evaluates the ternary conditional expression (a > b) ? a++ : c-- and stores the result in the variable 'result'.

    Explanation of Ternary Conditional Expression:
    - (a > b) checks if the value of 'a' (8) is greater than 'b' (3). (True)
    - If the condition is True, the expression returns the value of 'a++', which increments 'a' by 1 after using its current value.
    - If the condition is False, the expression returns the value of 'c--', which decrements 'c' by 1 after using its current value.
    - In this case, since the condition (a > b) is True, 'a' is incremented by 1 (a becomes 9), and the value of 'result' is the previous value of 'a' (which is 8).

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com



*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 3;
    int c = 5;

    // Ternary conditional expression explanation incorporated in comments
    int result = (a > b) ? a++ : c--; // Ternary conditional expression ((a > b) ? a++ : c--)

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 8

Explanation of Ternary Conditional Expression:
- Initial values: a = 8, b = 3, c = 5

Step-by-Step Evaluation:
1. `(a > b)`: The condition checks if `a` is greater than `b`.
   - Here, `a` (8) is indeed greater than `b` (3), so the condition `(a > b)` evaluates to `True`.

2. Ternary Operation `(a > b) ? a++ : c--`:
   - Since the condition is `True`, the expression on the left of the colon (`a++`) is executed.
   - `a++` is the post-increment operation, which returns the current value of `a` (8) and then increments `a` by 1.
   - Therefore, `result` is assigned the current value of `a`, which is `8`, and then `a` is incremented to `9`.

3. Final values after the expression:
   - `result = 8` (the value of `a` before incrementing).
   - `a = 9` (since `a` was incremented after the assignment).
   - `c` remains `5` because the `False` branch (`c--`) was not executed.

Summary:
- `result` holds the value `8` (the initial value of `a`).
- The program outputs `result is : 8`.

*/