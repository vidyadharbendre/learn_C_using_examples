/*
    Program Name: longIntIndiaPopulation.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: This program illustrates how to use format specifiers with length modifiers to format and display variables with precision and data type control in C. In this case, it demonstrates printing a short integer with the %hd format specifier.
*/

#include <stdio.h>

int main() {
    short int smallNumber = 32767; // Initialize a short integer variable with the maximum value
    short smallShortNumber = 32767;

    signed short int questionMark = -42;

    unsigned short int daysInYear = 365;

    // Using %hd with h length modifier to print a short integer
    printf("A short integer with %%hd: %hd\n", smallNumber);
    printf("A short integer with %%hd: %hd\n", smallShortNumber);

    printf("Printing questionMark ascii value: %hi\n", questionMark);
    printf("Printing questionMark ascii value: %hd\n", questionMark);
    printf("Printing questionMark character value: %020hd\n", questionMark);

    printf("Printing questionMark character value: %c\n", questionMark);
    printf("Printing questionMark character value: %20c\n", questionMark);

    printf("Number of days in a year: %hu\n", daysInYear);

    return 0; // Return 0 to indicate successful program execution
}
