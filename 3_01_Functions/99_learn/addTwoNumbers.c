/*
    Program Name: AddTwoNumbers.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates the use of a user-defined function in C to calculate 
    the sum of two integers. The function `addTwoNumbers` is called multiple times 
    with different arguments, and the results are displayed. The program highlights 
    how function calls can simplify repetitive calculations.
    
    Version History:
    Version 1.0 - [Date: 2024-11-26] - Initial version with PythonTutor.com note 
    for visualizing C programs on mobile.
    
    Note:
    To understand how the program executes step by step, visit https://pythontutor.com. 
    PythonTutor supports visualizing C code execution, showing the flow of function 
    calls and variable assignments in memory.
*/

#include <stdio.h>

// Function declaration
long addTwoNumbers(int fvar1, int fvar2);

int main() {
    // Variable declarations
    int var1 = 11, var2 = 22; // Input values
    long sum;                 // Output value

    // Call the function and display the result
    sum = addTwoNumbers(var1, var2);
    printf("%d + %d = %ld\n", var1, var2, sum);

    // Call the function again with new inputs
    var1 = 33;
    var2 = 44;
    sum = addTwoNumbers(var1, var2);
    printf("%d + %d = %ld\n", var1, var2, sum);

    // Uncomment the following lines to test with additional inputs
    // sum = addTwoNumbers(99, 1); 
    // printf("%d + %d = %ld\n", 99, 1, sum);

    return 0; // Indicate successful program execution
}

// Function definition
long addTwoNumbers(int fvar1, int fvar2) {
    long fsum;

    // Calculate the sum of the two input numbers
    fsum = fvar1 + fvar2;

    return fsum; // Return the result
}

// The output of the program is shown as below:

/*
11 + 22 = 33
33 + 44 = 77
*/