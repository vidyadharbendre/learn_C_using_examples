/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operators and comparison operators in C programming.
    It evaluates the complex logical expression a+2 > b || ! c && a == d || a-2 <= e to showcase their usage.

    Description:
    The program initializes integer variables 'a', 'b', 'c', 'd', and 'e' with values 11, 6, 0, 7, and 5 respectively. 
    It evaluates the complex logical expression a+2 > b || ! c && a == d || a-2 <= e and stores the result in the variable 'result'.

    Explanation of Logical and Comparison Expression:
    - Given values: a = 11, b = 6, c = 0, d = 7, e = 5.
    - a+2 > b: Evaluates to true (11 + 2 > 6), which is true.
    - !c: Negation of c (0) results in true.
    - a == d: Compares 'a' and 'd' (11 == 7), which is false.
    - a-2 <= e: Evaluates to true (11 - 2 <= 5), which is true.
    - Combining these conditions using logical operators (|| and &&): true || true && false || true
    - The expression resolves to true || false || true, which evaluates to true.
    - The value true is assigned to the variable 'result'.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int a = 11;
    int b = 6;
    int c = 0;
    int d = 7;
    int e = 5;

    // Logical and comparison expression explanation incorporated in comments
    int result = a + 2 > b || !c && a == d || a - 2 <= e; // Logical and comparison expression

    printf("result is : %d\n", result);

    return 0;
}

//The output of the above program is 
/*

result is : 1

Explanation of the Logical and Comparison Expression:
- Initial values: a = 11, b = 6, c = 0, d = 7, e = 5

Step-by-Step Evaluation:
1. **Expression Breakdown**:
   The expression `a + 2 > b || !c && a == d || a - 2 <= e` is evaluated based on logical operator precedence:
   - `!` (NOT) has the highest precedence, followed by `&&` (AND), and then `||` (OR).
   - We will evaluate each part in the order of precedence.

2. **Evaluating `(a + 2 > b)`**:
   - `a + 2` is `11 + 2 = 13`.
   - `13 > b` (where `b` is `6`) is `true` (or `1`).
   - Since `||` (OR) short-circuits when the left side is `true`, this alone would make the whole expression `true`. However, let’s evaluate the remaining parts to understand the logic fully.

3. **Evaluating `!c`**:
   - `c` is `0`, and `!c` is `true` (or `1`), because logical NOT (`!`) of `0` is `1`.

4. **Evaluating `(a == d)`**:
   - `a` is `11` and `d` is `7`.
   - `a == d` is `false` (or `0`).

5. **Evaluating `!c && a == d`**:
   - Since `!c` is `true` (1) and `a == d` is `false` (0), the expression `!c && a == d` is `false` (0).

6. **Evaluating `(a - 2 <= e)`**:
   - `a - 2` is `11 - 2 = 9`.
   - `9 <= e` (where `e` is `5`) is `false` (0).

7. **Combining the Expressions with `||` and `&&`**:
   - We have: `(true) || (false) || (false)`.
   - The overall expression is `true` (1) because at least one part of the expression connected by `||` is `true`.

**Summary**:
- The program outputs `result is : 1`.

*/