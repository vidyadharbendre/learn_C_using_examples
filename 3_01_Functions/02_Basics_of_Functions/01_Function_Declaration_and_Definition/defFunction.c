/*

    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    19 November, 2023

    Purpose:
    This program aims to demonstrate the creation and usage of a simple function in C programming. It showcases the process of declaring and defining a function and subsequently calling it from the main() function.

    Description:
    The core difference between function declaration and definition:
    
    Function Declaration:
    - Declaration simply tells the compiler about the existence of a function. It provides the function's name, return type, and parameters (if any), without specifying its implementation.
    - In this program, the line 'void greet();' declares the existence of the greet() function, telling the compiler that it will be defined later.

    Function Definition:
    - Definition provides the actual implementation or body of the function, including the set of instructions or actions it performs.
    - Here, the block of code 'void greet() { printf("Hello, Welcome to C Programming Functions!\n"); }' defines the greet() function, specifying what it does when called.

*/

#include <stdio.h>

// Function declaration
void greet(); // Declaring the greet function

int main() {
    // Function call
    greet(); // Calling the greet function
    return 0;
}

// Function definition
void greet() {
    printf("Hello, Welcome to C Programming Functions!\n"); // Printing a welcome message
}


//The output of the above program is shown below:

/*

Hello, Welcome to C Programming Functions!

*/
