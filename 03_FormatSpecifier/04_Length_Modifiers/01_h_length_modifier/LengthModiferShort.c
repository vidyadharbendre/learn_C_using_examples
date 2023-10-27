/* 
    Program Name    : ShortInt.c
    
    Author          : Vidyadhar Bendre
    
    Email           : vidyadhar.bendre@gmail.com
    
    Purpose         :
    Demonstrating the use of format specifiers and length modifiers with short integers.
    
    Description     :
        This program showcases various aspects of short integers and character values using different format specifiers and length modifiers.

        In this program, the following aspects are demonstrated:
        1. Printing a short integer using %hd and %hi format specifiers.
        2. Using length modifiers h and hi to print short integers.
        3. Displaying the ASCII value of a signed short integer.
        4. Formatting question mark character with different precision.
        5. Printing question mark character as a character value.
        6. Displaying the number of days in a year as an unsigned short integer.

        The output of the program is provided to illustrate the results for each format specifier and length modifier.
*/

#include <stdio.h>

int main() {
    short int smallNumber = 32767; // Initialize a short integer variable with the maximum value
    short smallShortNumber = 32767;

    signed short int questionMark = -42;

    unsigned short int daysInYear = 365;

    // Using %hd with h length modifier to print a short integer
    printf("1 - A short integer with %%hd................:%hd\n", smallNumber);
    printf("2 - A short integer with %%hd................:%hd\n", smallShortNumber);

    printf("3 - Printing questionMark ascii value........:%hi\n", questionMark);
    printf("4 - Printing questionMark ascii value........:%hd\n", questionMark);
    printf("5 - Printing questionMark character value....:%020hd\n", questionMark);

    printf("6 - Printing questionMark character value....:%c\n", questionMark);
    printf("7 - Printing questionMark character value....:%20c\n", questionMark);

    printf("8 - Number of days in a year.................: %hu\n", daysInYear);

    return 0; // Return 0 to indicate successful program execution
}

// The output of the above program as shown below

/* .   

1 - A short integer with %hd................:32767
2 - A short integer with %hd................:32767
3 - Printing questionMark ascii value........:-42
4 - Printing questionMark ascii value........:-42
5 - Printing questionMark character value....:-0000000000000000042
6 - Printing questionMark character value....:?
7 - Printing questionMark character value....:                   ?
8 - Number of days in a year.................: 365

*/