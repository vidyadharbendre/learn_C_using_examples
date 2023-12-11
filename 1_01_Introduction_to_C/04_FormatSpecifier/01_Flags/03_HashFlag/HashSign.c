/*

    Program Name:   HashSign.c
    Name    : Vidyadhar Bendre
    Email   : vidyadhar.bendre@gmail.com
    Purpose : 
        This C program demonstrates the use of the hash flag (#) in format specifiers, specifically with the '%#x' format specifier, to print integers in hexadecimal format with a '0x' prefix. 
        It also shows how to compare this notation with the simple '%x' format specifier.
    
    Description : 
        The hash flag (#) is used to specify an alternate form for printing values, typically for different number bases or special representations. 
        In this example, we take an integer value, 'hexNumber' with a value of 200, and use the '%#x' format specifier to print it in hexadecimal format with the '0x' prefix, making it easier to identify the base. 
        We also compare it with the simple '%x' format specifier to see the difference in representation.
        
*/

#include <stdio.h>

int main() {
    int hexNumber = 200;

    // Display in hexadecimal format with '0x' prefix
    printf("1 - Hexadecimal representation with \'0x\' prefix...:%#x\n", hexNumber);

    // Compare with Type Specifier
    printf("2 - Comparing with type specifier notation..........:%x\n", hexNumber);
    return 0;
}

// The output of the above program as shown below

/*

1 - Hexadecimal representation with '0x' prefix...:0xc8
2 - Comparing with type specifier notation..........:c8

*/
