/*

    Program : MinusLeftJustify.c
    Author  : Vidyadhar Bendre
    email   : vidyadhar.bendre@gmail.com
    Description : The minus flag (-) is used to left-justify the output.

*/

#include <stdio.h>

int main() {
    int number = 200;

    // Left-justify the number with a width of 10 characters
    printf("Flags - Wihout Left-justified...: %d\n", number);
    printf("Flags - Left-justified..........: %-10d\n", number);

    printf("Left-justified with zero padding: %010d\n", number);
    // Compare with precision
    printf("Comparing with precision........: %.10d\n", number);
    // Left Justified with Whitespace
    printf("Left-justified with whitespace..: %10d\n", number);


    return 0;
}
