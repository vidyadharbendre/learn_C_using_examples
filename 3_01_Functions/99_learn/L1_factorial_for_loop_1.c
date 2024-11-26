/*
    Program Name: FactorialCalculator.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program calculates the factorial of a given number using a `for` loop. 
    It takes an integer as input from the user, calculates the factorial iteratively, 
    and displays intermediate results for each step of the calculation. The final 
    factorial result is displayed at the end.

    Version History:
    Version 1.0 - [Date: 2024-11-26] - Initial version with PythonTutor.com note 
    for visualizing C programs on mobile.

    Note:
    To understand how the program executes step by step, visit https://pythontutor.com. 
    PythonTutor supports visualizing C code execution, showing the flow of loop 
    iterations and variable assignments.
*/

#include <stdio.h>

int main() {
    // Variable declarations
    int number, result = 1, i;

    // Input: Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Calculate the factorial iteratively
    for (i = 1; i <= number; i++) {
        result = result * i; // Update the factorial value
        printf("%d - %d\n", i, result); // Display intermediate results
    }

    // Display the final factorial result
    printf("\n\nThe factorial of the given number: %d\n\n", result);

    return 0; // Indicate successful program execution
}

// The output of the above program is shown as below:
/*
Enter the number: 5
1 - 1
2 - 2
3 - 6
4 - 24
5 - 120


The factorial of the given number: 120
*/
