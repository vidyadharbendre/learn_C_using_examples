/*
    Program Name: CheckLargestNumber.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program checks which of the two given integers is larger. 
    It uses a user-defined function `CheckLargest` to compare the 
    two numbers and display the result. The program highlights the 
    use of functions to perform conditional checks.

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
void CheckLargest(int fnumber1, int fnumber2);

int main() {
    // Variable declarations
    int number1, number2; // Input values

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Display the entered numbers
    printf("Entered first number is: %d\n", number1);
    printf("Entered second number is: %d\n", number2);

    // Call the function to check which number is larger
    CheckLargest(number1, number2);

    return 0; // Indicate successful program execution
}

// Function definition
void CheckLargest(int fnumber1, int fnumber2) {
    // Compare the two numbers and display the larger one
    if (fnumber1 > fnumber2) {
        printf("The given number %d is the largest.\n", fnumber1);
    } else if (fnumber1 < fnumber2) {
        printf("The given number %d is the largest.\n", fnumber2);
    } else {
        printf("Both numbers %d and %d are equal.\n", fnumber1, fnumber2);
    }
}

/*
 

*/
