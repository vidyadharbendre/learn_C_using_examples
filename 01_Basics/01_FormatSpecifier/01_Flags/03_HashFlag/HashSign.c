/*

    Program Name:   HashSign.c
    Name    : Vidyadhar Bendre
    Email   : vidyadhar.bendre@gmail.com
    Description : The hash flag (#) is used to specify an alternate form, typically for different number bases or special representations.

*/

#include <stdio.h>

int main() {
    int hexNumber = 200;

    // Display in hexadecimal format with '0x' prefix
    printf("Hexadecimal representation with \'0x\' prefix: %#x\n", hexNumber);

    // Compare with Type Specifier
    printf("Comparing with type specifier notation.......: %x\n", hexNumber);
    return 0;
}
