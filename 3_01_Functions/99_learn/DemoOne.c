/*
    Program Name: FunctionAdditionExample.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates the use of a function in C for adding two integers. 
    The main function calls the `addition` function to calculate the sum of two numbers.
    The result is then displayed.

    Version History:
        Version 1.0 - [Date: 2024-11-26] - Initial version with PythonTutor.com note 
        for visualizing C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

// Function declaration
int addition(int fnum1, int fnum2);

int main() {
    int result, num1 = 10, num2 = 20;

    // Function call
    result = addition(num1, num2);
    printf("The sum of %2d + %2d = %2d\n", num1, num2, result);

    return 0; // Indicate successful program execution
}

// Function definition
int addition(int fnum1, int fnum2) {
    int fresult;

    fresult = fnum1 + fnum2;

    return fresult; // Return the result of the addition
}

// The output of the above program is shown as below:
/*
The sum of 10 + 20 = 30
*/