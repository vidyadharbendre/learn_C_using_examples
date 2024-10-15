/* 
    Program Name: AbsoluteValueCalculator.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: This program calculates the absolute value of a floating-point number.
                 The input value is a negative double, and the program uses the 
                 'fabs' function from the 'math.h' library to compute the absolute value.

    Version History
    Version 1.0 - [Date: 2024-15-10] - Initial Program.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>  // Required for printf function
#include <math.h>   // Required for fabs function

int main() {
    // Declare a double variable 'value' and assign a negative number.
    double value = -5.67;  // Input value
    
    // Use the 'fabs' function to compute the absolute value of 'value'.
    double absoluteValue = fabs(value);  // Absolute value of 'value'

    // Output the absolute value using the printf function.
    printf("The absolute value of %lf is %lf\n", value, absoluteValue);

    // Return 0 to indicate successful program execution.
    return 0;
}
/*
The absolute value of -5.670000 is 5.670000
*/