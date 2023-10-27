/* 
    Program Name    : LongInt.c
    Author          : Vidyadhar Bendre
    Email           : vidyadhar.bendre@gmail.com
    
    Purpose         : 
    Illustrating the use of the format specifier with length modifiers to print a long integer.
    
    Description     : 
    This program demonstrates the use of the %ld format specifier with the l length modifier to display a long integer value.

    In this program, we do the following:
    1. Declare a long integer variable, 'largeNumber,' and initialize it with the maximum value a long integer can hold.
    2. Use the %ld format specifier with the l length modifier to print the 'largeNumber' variable, which indicates that it's a long integer.
    
    The purpose of this program is to show how format specifiers and length modifiers can be used to control the display of different data types. It also provides a real-time example of working with long integer values and format control in C.

    The output demonstrates the value of 'largeNumber' using the %ld format specifier.
*/

#include <stdio.h>

int main() {
    long int largeNumber = 2147483647; // The maximum value for a long int

    // Using %ld with l length modifier to print a long integer
    printf("1 - A long integer with %%ld: %ld\n", largeNumber);

    return 0; // Return 0 to indicate successful program execution
}

// The output of the program as shown below

/* 

1 - A long integer with %ld: 2147483647

*/