/* 
    Program Name    : ZeroPadding.c
    
    Author          : Vidyadhar Bendre
    
    Email           : vidyadhar.bendre@gmail.com
    
    Purpose         : Demonstrating the use of zero padding (0) in format specifiers.
    
    Description     : 
    The zero flag (0) is used to pad the output with zeros. It is typically used with integer formats to specify zero-padding.

    In this program, various formatting options are demonstrated using the zero-padding flag:
    1. Zero-pad the number with a width of 5 characters.
    2. Zero-padding with precision.
    3. Printing with left justification.
*/

#include <stdio.h>

int main() {
    int number = 200;

    // Zero-pad the number with a width of 5 characters
    printf("1 - Zero-padded.....................:%010d\n", number);
    // Zero-padding with precision
    printf("2 - Zero-padding with precision.....:%.10d\n", number);
    // Printing with left justification
    printf("3 - Printing with left justification:%-10d\n", number); 

    return 0;
}

// The output of the above program as shown below

/*

1 - Zero-padded.....................:0000000200
2 - Zero-padding with precision.....:0000000200
3 - Printing with left justification:200       

*/
