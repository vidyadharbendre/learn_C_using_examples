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
    printf("Zero-padded.....................: %010d\n", number);
    // Comparing with precision
    printf("Zero-padding with precision.....: %.10d\n", number);
    // With left justification
    printf("printing with left justification: %-10d\n", number); 

    return 0;
}
