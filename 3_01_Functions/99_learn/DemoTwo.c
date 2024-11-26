/*
    Program Name: AddTwoNumbers.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates the use of a user-defined function in C to calculate 
    the sum of two integers. The program takes two integers as input from the user, 
    calculates their sum using the `addition` function, and displays the result. 
    It showcases the modular approach for mathematical operations.

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
int addition(int fnum1, int fnum2); // Adds two integers

int main() {
    // Variable declarations
    int resultAdd, num1, num2;

    // Input: Prompt the user for two numbers
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);

    // Function call for addition and display result
    resultAdd = addition(num1, num2);
    printf("The sum of %2d + %2d = %2d\n", num1, num2, resultAdd);

    return 0; // Indicate successful program execution
}

// Function definition: Adds two integers
int addition(int fnum1, int fnum2) {
    int fresult;

    fresult = fnum1 + fnum2; // Calculate sum

    return fresult; // Return the result
}

// The output of the above program is shown as below:
/*
Enter the first number: 
56
Enter the second number: 
24
The sum of 56 + 24 = 80
*/
