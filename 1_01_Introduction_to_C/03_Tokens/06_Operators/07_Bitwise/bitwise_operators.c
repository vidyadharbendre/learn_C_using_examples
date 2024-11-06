/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of various bitwise operators in C.

    Description:
    The program shows how to use bitwise operators such as AND, OR, XOR, NOT, 
    left shift, and right shift on two integer values `a` and `b`, printing 
    the results for each operation.

    Explanation:
    - `a & b`: Performs a bitwise AND, resulting in bits set to 1 where both `a` and `b` have bits set to 1.
    - `a | b`: Performs a bitwise OR, setting bits to 1 where either `a` or `b` has bits set to 1.
    - `a ^ b`: Performs a bitwise XOR, setting bits to 1 where `a` and `b` differ.
    - `~a`: Bitwise NOT inverts all bits in `a`.
    - `a << 1`: Left shift shifts bits of `a` one position left, doubling the value.
    - `b >> 1`: Right shift shifts bits of `b` one position right, halving the value.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version to demonstrate basic bitwise operations.

    Note:
    Visualize bitwise operations in C on mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int a = 27;           // a in binary: 00011011
    int b = 39;           // b in binary: 00100111

    // Bitwise AND: a & b
    // a = 00011011
    // b = 00100111
    // Result: a & b = 00000011 (binary), decimal 3
    printf("a & b = %d\n", a & b);

    // Bitwise OR: a | b
    // a = 00011011
    // b = 00100111
    // Result: a | b = 00111111 (binary), decimal 63
    printf("a | b = %d\n", a | b);

    // Bitwise XOR: a ^ b
    // a = 00011011
    // b = 00100111
    // Result: a ^ b = 00111100 (binary), decimal 60
    printf("a ^ b = %d\n", a ^ b);

    // Bitwise NOT: ~a
    // a = 00011011
    // Result: ~a = 11100100 (binary), value may vary based on system representation
    printf("~a = %d\n", ~a);

    // Left Shift: a << 1
    // a = 00011011
    // Result: a << 1 = 00110110 (binary), decimal 54
    printf("a << 1 = %d\n", a << 1);

    // Right Shift: b >> 1
    // b = 00100111
    // Result: b >> 1 = 00010011 (binary), decimal 19
    printf("b >> 1 = %d\n", b >> 1);

    return 0;
}

// The Output of the above program is shown as below:

/*

a & b = 3
a | b = 63
a ^ b = 60
~a = -28
a << 1 = 54
b >> 1 = 19

*/
