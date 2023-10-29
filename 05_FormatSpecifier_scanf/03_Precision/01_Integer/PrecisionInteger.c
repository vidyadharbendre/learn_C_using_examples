/*

Author  : Vidyadhar Bendre

Email   : vidyadhar.bendre@gmail.com

Purpose :

This program demonstrates the use of format specifiers to control the precision and formatting of integer and unsigned integer values.
It prints both integer and unsigned integer values with default precision and with a specified precision.

*/

#include <stdio.h>

int main() {
    int integerNumber = 200;
    unsigned int unsignedNumber = 12345;

    printf("1 - Integer with default precision.........:%d\n", integerNumber);
    printf("2 - Integer with precision of 5............:%.5d\n", integerNumber);
    
    printf("3 - Unsigned integer with default precision:%u\n", unsignedNumber);
    printf("4 - Unsigned integer with precision of 8...:%.8u\n", unsignedNumber);
    
    return 0;
}

// The output of the program as follows

/*

1 - Integer with default precision.........:200
2 - Integer with precision of 5............:00200
3 - Unsigned integer with default precision:12345
4 - Unsigned integer with precision of 8...:00012345

*/