/*
    Author  : Vidyadhar Bendre
    Email   : vidyadhar.bendre@gmail.com
    Date    : 12 November, 2023

    Purpose: Demonstrate the usage of identifiers in C.

    Description:
        This program declares and uses various identifiers such as variable identifiers,
        function identifiers, and constant identifiers.

        Rules for valid C identifiers:
        - They must start with a letter (uppercase (A-Z) or lowercase (a-z)) or an underscore (_).
        - Subsequent characters can be letters, digits, or underscores.
        - Cannot be a C keyword (reserved word).
        - Are case-sensitive, meaning myVariable and myvariable are different identifiers.

        Examples:
        - Variable Identifier: int age;
        - Function Identifier: void printMessage()
        - Constant Identifier: #define PI 3.14159
*/

#include <stdio.h>

// Function Declaration
void greetUser();

// Constant Identifier
#define PI 3.14159

int main() {
    // Variable Identifiers
    int myVariable = 42;
    float radius = 5.0;

    // Function Call
    greetUser();

    // Using Identifiers in Expressions
    float area = PI * radius * radius;

    // Displaying Results
    printf("Value of myVariable: %d\n", myVariable);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}

// Function Definition
void greetUser() {
    printf("Hello, User!\n");
}

// The output of the above program is shown as below

/*

Hello, User!
Value of myVariable: 42
Area of the circle: 78.54

*/