/*
    Program: MinusLeftJustify.c
    Author : Vidyadhar Bendre
    Email  : vidyadhar.bendre@gmail.com

    Purpose: This program demonstrates the usage of format specifiers and the minus flag (-) to left-justify and format integer output.

    Description: The program showcases different formatting techniques for integer output. 
    It uses the minus flag (-) to left-justify the output, as well as other formatting options, such as zero padding, precision, and whitespace alignment.

*/

#include <stdio.h>

int main() {
    int number = 200;

    // Left-justify the number with a width of 10 characters
    printf("1 - Flags - Without Left-justified...:%d\n", number);
    printf("2 - Flags - Left-justified...........:%-10d\n", number);
    // Left justify with zero padding
    printf("3 - Left-justified with zero padding.:%010d\n", number);
    // Compare with precision
    printf("4 - Comparing with precision.........:%.10d\n", number);
    // Left Justified with Whitespace
    printf("5 - Left-justified with whitespace...:%10d\n", number);

    return 0;
}

// The output of the program is shown below:

/* .   

1 - Flags - Without Left-justified...:200
2 - Flags - Left-justified...........:200       
3 - Left-justified with zero padding.:0000000200
4 - Comparing with precision.........:0000000200
5 - Left-justified with whitespace...:       200

*/
