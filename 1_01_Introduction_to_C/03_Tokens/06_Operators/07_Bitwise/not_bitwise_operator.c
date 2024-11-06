/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of the bitwise NOT operator in C, 
    specifically inverting the bits of an integer and interpreting the result.

    Description:
    The program uses the bitwise NOT operator (~) on an integer `a` to invert 
    its bits. It then explains the Two's Complement representation that results 
    in a negative value, demonstrating how to interpret the binary result as a 
    signed integer.

    Explanation:
    - `~a`: Bitwise NOT inverts all bits in `a`, changing 0s to 1s and 1s to 0s.
    - This inversion results in a binary value interpreted with Two's Complement notation, 
      giving a negative result if the most significant bit (leftmost) is set to 1.
    
    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating bitwise NOT operator.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int a = 27;  // a in binary: 00011011

    /* 
       Explanation of Bitwise NOT (~) Operation on 'a':

       - Initial value of a in decimal: 27
       - Binary representation of a (assuming 8-bit for simplicity):
           a = 00011011

       - The bitwise NOT (~) operator inverts each bit:
           ~a = 11100100

       - Since we’re working with signed integers in C, this result is interpreted using Two's Complement notation.
       - In Two's Complement:
           - The leftmost bit (1 in this case) indicates a negative number.
           - To determine the value of ~a, we take the following steps:

           1. Invert all bits to get the positive counterpart:
              11100100 -> 00011011

           2. Add 1 to the inverted bits:
              00011011 + 1 = 00011100

           3. Convert 00011100 to decimal, which equals 28.
           4. Apply the negative sign (because the leftmost bit was 1), so ~a = -28.

       - Final Result:
           ~a = -28
    */
    printf("~a = %d\n", ~a); // Output will be -28

    return 0;
}

// The Output is shown as below:
/*
~a = -28
*/
