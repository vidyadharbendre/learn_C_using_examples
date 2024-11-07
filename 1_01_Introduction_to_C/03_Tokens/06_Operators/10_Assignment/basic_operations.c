/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of compound assignment operators to perform 
    the following operations on two integers `a` and `b`: `a /= b`, `a *= b`, `a += b`, 
    `a -= b`, `a <<= b`, and `a >>= b`.

    Description:
    The program performs six arithmetic and bitwise operations in sequence using the values `a = 9` 
    and `b = 3`. The operations are as follows:
    - `a /= b`: Divides `a` by `b` and assigns the result to `a`.
    - `a *= b`: Multiplies `a` by `b` and assigns the result to `a`.
    - `a += b`: Adds `b` to `a` and assigns the result to `a`.
    - `a -= b`: Subtracts `b` from `a` and assigns the result to `a`.
    - `a <<= b`: Left shifts `a` by `b` bits and assigns the result to `a`.
    - `a >>= b`: Right shifts `a` by `b` bits and assigns the result to `a`.

    Explanation:
    - `a /= b`: Divides `a` by `b` (9 / 3 = 3). The new value of `a` is 3.
    - `a *= b`: Multiplies the new value of `a` (3) by `b` (3 * 3 = 9). The new value of `a` is 9.
    - `a += b`: Adds `b` (3) to `a` (9 + 3 = 12). The new value of `a` is 12.
    - `a -= b`: Subtracts `b` (3) from `a` (12 - 3 = 9). The new value of `a` is 9.
    - `a <<= b`: Left shifts `a` (9) by `b` (3) positions. In binary, `9` is `00001001`. After shifting 3 positions to the left, it becomes `01001000`, which is 72 in decimal.
    - `a >>= b`: Right shifts `a` (72) by `b` (3) positions. In binary, `72` is `01001000`. After shifting 3 positions to the right, it becomes `00001001`, which is 9 in decimal.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating the usage of compound 
        assignment operators for arithmetic and bitwise operations.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int a = 9;  // Initial value of a
    int b = 3;  // Initial value of b

    /* 
       Explanation of the operations performed on 'a' and 'b':

       - Operation 1: a /= b
         a = 9, b = 3
         a /= b means a = a / b
         9 / 3 = 3, so a becomes 3

       - Operation 2: a *= b
         a = 3, b = 3
         a *= b means a = a * b
         3 * 3 = 9, so a becomes 9

       - Operation 3: a += b
         a = 9, b = 3
         a += b means a = a + b
         9 + 3 = 12, so a becomes 12

       - Operation 4: a -= b
         a = 12, b = 3
         a -= b means a = a - b
         12 - 3 = 9, so a becomes 9

       - Operation 5: a <<= b
         a = 9, b = 3
         a <<= b means a = a << b (left shift by b positions)
         9 (binary: 00001001) << 3 = 72 (binary: 01001000), so a becomes 72

       - Operation 6: a >>= b
         a = 72, b = 3
         a >>= b means a = a >> b (right shift by b positions)
         72 (binary: 01001000) >> 3 = 9 (binary: 00001001), so a becomes 9

       Final Result: a = 9 after all operations
    */

    // Perform the operations
    a /= b;  // a = a / b  --> a = 9 / 3 = 3
    printf("a /= b: a = %d\n", a);  // Output: 3

    a *= b;  // a = a * b  --> a = 3 * 3 = 9
    printf("a *= b: a = %d\n", a);  // Output: 9

    a += b;  // a = a + b  --> a = 9 + 3 = 12
    printf("a += b: a = %d\n", a);  // Output: 12

    a -= b;  // a = a - b  --> a = 12 - 3 = 9
    printf("a -= b: a = %d\n", a);  // Output: 9

    a <<= b;  // a = a << b  --> a = 9 << 3 = 72
    printf("a <<= b: a = %d\n", a);  // Output: 72

    a >>= b;  // a = a >> b  --> a = 72 >> 3 = 9
    printf("a >>= b: a = %d\n", a);  // Output: 9

    return 0;
}

// Example Output:
/*
a /= b: a = 3
a *= b: a = 9
a += b: a = 12
a -= b: a = 9
a <<= b: a = 72
a >>= b: a = 9
*/
