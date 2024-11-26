/*
    Program Name: AddAndSubtract.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates the use of user-defined functions in C to perform 
    addition and subtraction of two integers. The program takes two inputs from the user, 
    calculates their sum and difference using separate functions, and displays the results. 
    This highlights the modularity of functions for mathematical operations.

    Version History:
    Version 1.0 - [Date: 2024-11-26] - Initial version with PythonTutor.com note 
    for visualizing C programs on mobile.

    Note:
    To understand how the program executes step by step, visit https://pythontutor.com. 
    PythonTutor supports visualizing C code execution, showing the flow of function 
    calls and variable assignments in memory.
*/

#include <stdio.h>

// Function declarations
int addition(int fnum1, int fnum2);      // Adds two numbers
int subtraction(int fnum1, int fnum2);  // Subtracts the second number from the first

int main() {
    // Variable declarations
    int resultAdd, resultSub, num1, num2;

    // Input: Prompt the user for two numbers
    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);

    // Function call for addition and display result
    resultAdd = addition(num1, num2);
    printf("The sum of....... %3d + %2d = %2d\n", num1, num2, resultAdd);

    // Function call for subtraction and display result
    resultSub = subtraction(num1, num2);
    printf("The subtraction of %2d - %2d = %2d\n", num1, num2, resultSub);

    return 0; // Indicate successful program execution
}

// Function definition: Adds two integers
int addition(int fnum1, int fnum2) {
    int fresult;
    fresult = fnum1 + fnum2; // Calculate sum
    return fresult;          // Return the result
}

// Function definition: Subtracts the second integer from the first
int subtraction(int fnum1, int fnum2) {
    int fresult;
    fresult = fnum1 - fnum2; // Calculate difference
    return fresult;          // Return the result
}

/*
Enter the first number: 
45
Enter the second number: 
32
The sum of.......  45 + 32 = 77
The subtraction of 45 - 32 = 13
*/
