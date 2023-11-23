/*

    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    23 November, 2023

    Purpose:
    This C program demonstrates the use of functions with a simple addition operation. It showcases how functions are declared, defined, and called within a program.

    Description:
    Function Declaration (int add(int a, int b);): Declares a function add that takes two integer parameters (a and b) and returns an integer value.
    Main Function (int main() { ... }): The entry point of the program where the function add is called to perform addition.
    Function Call (result = add(3, 5);): Calls the add function with arguments 3 and 5 and assigns the result to the variable result.
    Function Definition (int add(int a, int b) { ... }): Defines the add function that adds two integers (a and b) and returns the result.
    Return Statement (return c;): Sends the computed result back to the caller function (main function in this case).
    Printing Result (printf("Result: %d\n", result);): Displays the result of the addition operation using printf function.

*/
#include <stdio.h>

// Function declaration
int add(int a, int b); // Function prototype

int main() {
    int result;
    
    // Function call to add numbers 3 and 5
    result = add(3, 5);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition with a return statement
int add(int a, int b) {
    int c; // Variable to hold the result
    
    c = a + b; // Adding two numbers and storing the result in 'c'
    return c; // Returning the result back to the caller
}
