/*
    Name of the Program: Local Variable Scope with 'auto' Storage Class
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program demonstrates the usage and scope of a local variable 'fnum' declared
                 inside the function 'function()' with the 'auto' storage class.
                 The variable 'fnum' is an 'auto' variable by default and is only accessible within
                 the function it's declared in. Attempting to access 'fnum' outside of the function
                 will result in a scope error as its visibility is limited to the function.

    Version History:
        Version 1.0 - [Date: 2024-12-04] - Initial version for demonstrating variable scope
        Version 1.1 - [Date: 2024-11-28] - Adjusted to match comment format

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

void function(); // Function prototype declaration

int main() {
    function(); // Call the function
    // 'fnum' is not accessible here as its scope is limited to the function it's declared in
    return 0; // Return 0 to indicate successful completion
}

void function() {
    auto int fnum = 10; // Declare and initialize 'fnum' as an 'auto' variable
    printf("Value of num inside function: %d\n", fnum); // Print the value of 'fnum'
}

// The output of the above program is shown as below:
/*  

Value of num inside function: 10

*/
