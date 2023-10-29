/*

    Author  : Vidyadhar Bendre

    Email   : vidyadhar.bendre@gmail.com

    Purpose :
        This C program demonstrates the usage of various formatting options in the printf function for both signed and unsigned integers. It showcases left justification, width, zero padding, and precision to format and display integer values. The program provides examples for different formatting scenarios.

    Description:
        1. Default display of an integer.
        2. Left justification using the '-' flag.
        3. Left justification and width set to 10 characters.
        4. Display with a width of 10 characters.
        5. Display with zero padding and a width of 10 characters.
        6. Display with precision (10 characters, in this case).
        7. Display of an unsigned integer with the default width.
        8. Display of an unsigned integer with a width of 10 characters.

*/

#include <stdio.h>

int main() {
    int integerNumber = 200;
    unsigned int unsignedNumber = 12345;

    printf("1 - Displaying Integer with default width........: %d\n", integerNumber);
    printf("2 - Integer with left justification - <-flags>...: %-d\n", integerNumber);
    printf("3 - Left justification <-flag>plus width 10......: %-10d\n", integerNumber);
    printf("4 - Integer with width of 10 characters..........: %10d\n", integerNumber);
    printf("5 - Integer with zero padding....................: %010d\n", integerNumber);
    printf("6 - Integer with precision.......................: %.10d\n", integerNumber);
    printf("7 - Unsigned integer with default width..........: %u\n", unsignedNumber);
    printf("8 - Unsigned integer with width of 10 characters.: %10u\n", unsignedNumber);

    return 0;
}

// The output of the above program as follows

/*

1 - Displaying Integer with default width........: 200
2 - Integer with left justification - <-flags>...: 200
3 - Left justification <-flag>plus width 10......: 200       
4 - Integer with width of 10 characters..........:        200
5 - Integer with zero padding....................: 0000000200
6 - Integer with precision.......................: 0000000200
7 - Unsigned integer with default width..........: 12345
8 - Unsigned integer with width of 10 characters.:      12345

*/
