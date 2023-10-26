/*

Program Name: LengthModifierlong.c
Author: Vidyadhar Bendre
Email: vidyadhar.bendre@gmail.com
Description: Here, we use the l length modifier with the %ld format specifier to print a long integer. The l modifier indicates that the variable largeNumber is a long integer.

*/
    
#include <stdio.h>

int main() {
    long int largeNumber = 2147483647; // The maximum value for a long int

    // Using %ld with l length modifier to print a long integer
    printf("A long integer with %%ld: %ld\n", largeNumber);

    return 0;
}
