/*
    Program: PositiveSign.c
    Author : Vidyadhar Bendre
    Email  : vidyadhar.bendre@gmail.com

    Purpose: This program demonstrates the usage of the plus flag (+) to display a plus sign in front of positive numbers.

    Description: The program showcases the behavior of the plus flag (+) when formatting integer output. 
    
    It displays a plus sign in front of positive numbers and demonstrates the default behavior of negative numbers when no sign is specified.
*/

#include <stdio.h>

int main() {
    int positiveNumber = 200;
    int negativeNumber = -42;

    // Display a plus sign for positive numbers
    printf("Positive number with forced plus sign.....:+%d\n", positiveNumber);

    // Display a negative sign by default for int datatype
    printf("Negative number by default int type.......:%d\n", negativeNumber);

    return 0;
}

// The output of the program is shown below:

/* .    

Positive number with forced plus sign.....:+200
Negative number by default int type.......:-42

*/
