/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of arithmetic operators and compound assignment operators
    for performing operations on two float variables `a` and `b`. The operations are:
    - a = a / b (a divided by b)
    - a = a * b (a multiplied by b)
    - a = a + b (a plus b)
    - a = a - b (a minus b)
    - a = a / b (again divide)
    - a = a * b (again multiply)
    
    Description:
    The program initializes `a = 9.0` and `b = 3.0`. It then evaluates the following operations:
    - a /= b
    - a *= b
    - a += b
    - a -= b
    - a /= b
    - a *= b

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating arithmetic operations
        with float variables.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    float a = 9.0;  // Initial value of a
    float b = 3.0;  // Initial value of b

    /* 
       Explanation of the operations performed on 'a' and 'b':

       - Operation 1: a /= b
         a = 9.0, b = 3.0
         a /= b means a = a / b
         9.0 / 3.0 = 3.0, so a becomes 3.0

       - Operation 2: a *= b
         a = 3.0, b = 3.0
         a *= b means a = a * b
         3.0 * 3.0 = 9.0, so a becomes 9.0

       - Operation 3: a += b
         a = 9.0, b = 3.0
         a += b means a = a + b
         9.0 + 3.0 = 12.0, so a becomes 12.0

       - Operation 4: a -= b
         a = 12.0, b = 3.0
         a -= b means a = a - b
         12.0 - 3.0 = 9.0, so a becomes 9.0

       - Operation 5: a /= b
         a = 9.0, b = 3.0
         a /= b means a = a / b
         9.0 / 3.0 = 3.0, so a becomes 3.0

       - Operation 6: a *= b
         a = 3.0, b = 3.0
         a *= b means a = a * b
         3.0 * 3.0 = 9.0, so a becomes 9.0

       Final Result: a = 9.0 after all operations
    */

    // Perform the operations
    a /= b;  // a = a / b  --> a = 9.0 / 3.0 = 3.0
    printf("a /= b: a = %.2f\n", a);  // Output: 3.00

    a *= b;  // a = a * b  --> a = 3.0 * 3.0 = 9.0
    printf("a *= b: a = %.2f\n", a);  // Output: 9.00

    a += b;  // a = a + b  --> a = 9.0 + 3.0 = 12.0
    printf("a += b: a = %.2f\n", a);  // Output: 12.00

    a -= b;  // a = a - b  --> a = 12.0 - 3.0 = 9.0
    printf("a -= b: a = %.2f\n", a);  // Output: 9.00

    a /= b;  // a = a / b  --> a = 9.0 / 3.0 = 3.0
    printf("a /= b: a = %.2f\n", a);  // Output: 3.00

    a *= b;  // a = a * b  --> a = 3.0 * 3.0 = 9.0
    printf("a *= b: a = %.2f\n", a);  // Output: 9.00

    return 0;
}

// Example Output:
/*
a /= b: a = 3.00
a *= b: a = 9.00
a += b: a = 12.00
a -= b: a = 9.00
a /= b: a = 3.00
a *= b: a = 9.00
*/
