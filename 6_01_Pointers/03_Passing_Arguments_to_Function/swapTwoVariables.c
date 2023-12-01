/*  

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
1st December, 2023

Purpose:
Variable Swapping: The program aims to swap the values of two variables (var1 and var2) using a function called swapTwoVariables.
Display Function: Additionally, it includes a function named displayTwoVariables to show the values of these variables before and after swapping.

Description:
The given C program demonstrates the concept of "call by reference," where the memory addresses of variables are passed to functions to perform operations on the actual variables rather than copies.

How It Works (Call by Reference):
swapTwoVariables Function: It takes two pointer arguments (int *fvar1 and int *fvar2). These pointers store the memory addresses of var1 and var2.
The function swaps the values of the variables indirectly by dereferencing the pointers and modifying the values at the addresses they point to.
displayTwoVariables Function: This function prints the values of the two variables.

Call by Reference:
In the main function, addresses of var1 and var2 are passed to swapTwoVariables.
As the addresses are passed (not the values), changes made to the variables within swapTwoVariables directly affect the original variables (var1 and var2), illustrating "call by reference."

Benefits of Call by Reference:
Efficiency: Passing memory addresses rather than values reduces memory consumption and enhances performance for large data.
Direct Modification: Enables functions to directly modify original variables, allowing changes to persist outside the function scope.

Conclusion:
This program showcases the functionality of "call by reference" in C, demonstrating how passing memory addresses as arguments allows functions to work directly with original variables, enabling efficient variable manipulation.

*/

#include <stdio.h>

// Function to swap two variables using pointers
void swapTwoVariables(int *fvar1, int *fvar2);

// Function to display two variables
void displayTwoVariables(int a, int b);

int main() {
    int var1, var2;

    var1 = 99;
    var2 = 00;

    // Display values before swapping
    printf("Before swapping variables\n");
    displayTwoVariables(var1, var2);

    // Swapping variables by passing their addresses
    swapTwoVariables(&var1, &var2);

    // Display values after swapping
    printf("After swapping variables\n");
    displayTwoVariables(var1, var2);

    return 0;
}

// Function definition to swap two variables
void swapTwoVariables(int *fvar1, int *fvar2) {
    int temp = *fvar1;
    *fvar1 = *fvar2;
    *fvar2 = temp;
}

// Function definition to display two variables
void displayTwoVariables(int a, int b) {
    printf("The value of the first variable %d and second %d\n", a, b);
}


// The output of the above program is

/* .  

Before swapping variables
The value of the first variable 99 and second 0
After swapping variables
The value of the first variable 0 and second 99

*/