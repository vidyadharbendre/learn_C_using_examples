/*
    Author: 
    Vidyadhar Bendre

    Email: 
    vidyadhar.bendre@gmail.com

    Date: 
    November 5, 2024

    Purpose:
    This program demonstrates operator precedence and logical comparison in C programming.
    It evaluates the complex expression `200 / 20 <= 15 - 5 + 200 % 10 - 10 == 5 >= 1 != 1` step by step.

    Description:
    The program evaluates the expression using C's predefined operator precedence rules:
    1. Arithmetic operations (+, -, *, /, %) are evaluated first (left-to-right for equal precedence).
    2. Relational operators (<=, >=, >, <) are evaluated next.
    3. Equality operators (==, !=) follow.
    4. The final result is determined by logical comparisons.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Added operator precedence explanation.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    // Expression explanation incorporated in comments
    int result = 200 / 20 <= 15 - 5 + 200 % 10 - 10 == 5 >= 1 != 1;

    /*
        Step-by-step evaluation:
        
        Given Expression: 200 / 20 <= 15 - 5 + 200 % 10 - 10 == 5 >= 1 != 1

        Step 1: Evaluate arithmetic operators first (/, %, -, +).
            a. 200 / 20 = 10
            b. 15 - 5 = 10
            c. 200 % 10 = 0 (remainder of 200 divided by 10)
            d. 10 + 0 = 10
            e. 10 - 10 = 0

        After arithmetic evaluation, the expression becomes:
        10 <= 0 == 5 >= 1 != 1

        Step 2: Evaluate relational operators (<=, >=, <, >) from left to right:
            a. 10 <= 0 evaluates to 0 (false).
            b. 0 == 5 evaluates to 0 (false).
            c. 0 >= 1 evaluates to 0 (false).
            d. 0 != 1 evaluates to 1 (true).

        After relational evaluation, the final result is:
        1 (true)

        Note: Logical comparisons in C return 1 for true and 0 for false.
    */

    // Print the result of the expression
    printf("Result is: %d\n", result); // Expected output: 1

    return 0;
}

// The output of the above program is shown below:
/*
result is : 1
*/
