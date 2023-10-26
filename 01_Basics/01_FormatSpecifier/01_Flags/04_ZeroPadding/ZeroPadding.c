/* 

    Program Name    : ZeroPadding.c
    Author          : Vidyadhar Bendre
    Email           : vidyadhar.bendre@gmail.com
    Description     : The zero flag (0) is used to pad the output with zeros. It is typically used with integer formats to specify zero-padding.

*/

#include <stdio.h>

int main() {
    int number = 200;

    // Zero-pad the number with a width of 5 characters
    printf("Zero-padded: %06d\n", number);

    return 0;
}
