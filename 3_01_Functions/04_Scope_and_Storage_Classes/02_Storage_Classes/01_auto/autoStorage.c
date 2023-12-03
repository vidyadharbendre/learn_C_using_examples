/* . 

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
4th December, 2023

Purpose: 
Demonstrating the usage and scope of a local variable with the 'auto' storage class.

Description: 
This program illustrates the scope of a local variable 'fnum' declared inside the function 'function()'.

The variable 'fnum' is an 'auto' variable by default and is only accessible within the function it's declared in.

Attempting to access 'fnum' outside the 'function()' will result in a scope error as its visibility is limited to the function.

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
