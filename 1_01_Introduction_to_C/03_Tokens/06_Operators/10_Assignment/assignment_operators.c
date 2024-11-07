/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of arithmetic operators and compound assignment 
    to evaluate the expression `num1 += num2 * 4 - 7`.

    Description:
    The program evaluates a given arithmetic expression using the provided values 
    for `num1` and `num2`, and prints the result. The expression used is 
    `num1 += num2 * 4 - 7`, which involves multiplication, subtraction, and 
    addition assignment.

    Explanation:
    - `num2 * 4`: First, `num2` (5) is multiplied by 4, resulting in 20.
    - `num2 * 4 - 7`: Then, 7 is subtracted from 20, resulting in 13.
    - `num1 += 13`: Finally, `num1` (3) is incremented by 13, so `num1` becomes 16.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating the evaluation of an 
        arithmetic expression with the compound assignment operator.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int num1 = 3;  // Initial value of num1
    int num2 = 5;  // Initial value of num2

    /* 
       Explanation of the expression `num1 += num2 * 4 - 7`:

       - Step 1: Evaluate `num2 * 4`
         num2 = 5, so num2 * 4 = 5 * 4 = 20
       
       - Step 2: Evaluate `num2 * 4 - 7`
         From Step 1, we have 20. Now, subtract 7: 20 - 7 = 13
       
       - Step 3: Evaluate `num1 += 13`
         num1 = 3, so num1 += 13 results in num1 = 3 + 13 = 16

       - Final Result: After evaluation, num1 becomes 16.
    */

    num1 += num2 * 4 - 7;  // Perform the evaluation of the expression

    // Output the result of the expression
    printf("The result of num1 += num2 * 4 - 7 is: %d\n", num1);  // Output: 16

    return 0;
}

// Example Output:
/*
The result of num1 += num2 * 4 - 7 is: 16
*/
