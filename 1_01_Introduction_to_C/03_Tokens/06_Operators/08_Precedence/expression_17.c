/*
    Author: Vidyadhar Bendre

    Email: vidyadhar.bendre@gmail.com

    Date: November 5, 2024

    Purpose:
    This program evaluates the expression `2 * ((a % 5) * (4 + (b - 3) / (c + 2)))`
    for given values of `a`, `b`, and `c`.

    Description:
    - Given values: a = 8, b = 15, c = 4
    - The program evaluates the expression step-by-step, 
      following C operator precedence rules.

    Step-by-Step Explanation:
    - Given values: a = 8, b = 15, c = 4
    - The expression is: `2 * ((a % 5) * (4 + (b - 3) / (c + 2)))`

    Step 1: Evaluate innermost expressions first:
        a. `a % 5`: 
           - Calculate the remainder of 8 divided by 5: `8 % 5 = 3`
        b. `b - 3`:
           - Subtract 3 from 15: `15 - 3 = 12`
        c. `c + 2`:
           - Add 2 to 4: `4 + 2 = 6`

    Step 2: Evaluate division:
        a. `(b - 3) / (c + 2)`:
           - Divide the result of `b - 3` by `c + 2`: `12 / 6 = 2`

    Step 3: Evaluate addition:
        a. `4 + (b - 3) / (c + 2)`:
           - Add 4 to the result of the division: `4 + 2 = 6`

    Step 4: Evaluate multiplication inside parentheses:
        a. `(a % 5) * (4 + (b - 3) / (c + 2))`:
           - Multiply the results of `a % 5` and the addition: `3 * 6 = 18`

    Step 5: Evaluate final multiplication:
        a. `2 * ((a % 5) * (4 + (b - 3) / (c + 2)))`:
           - Multiply 2 by the result of the previous step: `2 * 18 = 36`

    Final Result:
    - The value of the expression is: `36`

    Output:
    - The result of the expression is printed to the console.

    Version History:
        Version 1.0 - Initial version with detailed step-by-step explanation.
*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 15;
    int c = 4;

    // Evaluate the expression
    int result = 2 * ((a % 5) * (4 + (b - 3) / (c + 2)));

    // Print the result
    printf("Result is: %d\n", result);

    return 0;
}

// The output of the above program is shown as below:

/*
Result is: 36
*/