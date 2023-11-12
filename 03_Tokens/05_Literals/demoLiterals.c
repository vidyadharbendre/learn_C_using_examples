/*

Author   : Vidyadhar Bendre
Email    : vidyadhar.bendre@gmail.com
Date     : 12 November, 2023

Purpose  : Demonstrate the usage of various literals in C programming.

Description:
1. Integer Literal: Declare an integer variable 'myNumber' and assign it the value 42.
   Print the value using the printf function with the %d format specifier.

2. Floating-Point Literal: Declare a floating-point variable 'piValue' and assign it the value 3.14.
   Print the value using the printf function with the %.2f format specifier for two decimal places.

3. Character Literal: Declare a character variable 'myChar' and assign it the character 'A'.
   Print the value using the printf function with the %c format specifier.

4. String Literal: Declare a character array 'greeting' with the string "Hello, World!".
   Print the value using the printf function with the %s format specifier.

Note: This program aims to showcase the representation and usage of different literals in C.
*/

#include <stdio.h>

int main() {
    // Integer Literal
    int myNumber = 42;
    printf("Integer Literal..........: %d\n", myNumber);

    // Floating-Point Literal
    float piValue = 3.14;
    printf("Floating-Point Literal...: %.2f\n", piValue);

    // Character Literal
    char myChar = 'A';
    printf("Character Literal........: %c\n", myChar);

    // String Literal
    char greeting[] = "Hello, World!";
    printf("String Literal...........: %s\n", greeting);

    return 0;
}

// The output of the above program is shown as below

/* 

Integer Literal..........: 42
Floating-Point Literal...: 3.14
Character Literal........: A
String Literal...........: Hello, World!

*/