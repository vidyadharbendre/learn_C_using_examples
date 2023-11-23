
/*
    Author      :
    Vidyadhar Bendre

    Email       :
    vidyadhar.bendre@gmail.com

    Purpose     :    
    This program demonstrates the usage of user-defined functions in C programming by creating a function bakeCake() that prints the steps to bake a cake.

    Description :
    The program begins with a function declaration of bakeCake(), which tells the compiler that there will be a function with this name defined later in the code.
    
    Inside the main() function, bakeCake() is called, triggering the execution of the bakeCake() function.
    
    The bakeCake() function, defined afterward, contains the set of instructions to mix the ingredients, bake the cake, and finally, a message to enjoy the cake. It uses printf to display this information.

    Explaination:
    Upon execution, the main() function calls bakeCake().
    
    The bakeCake() function is then executed, displaying the message "Mix ingredients, bake in oven, enjoy your cake!" using the printf() function.
    
    This showcases how a user-defined function can be created, declared, and called within a C program, allowing for modularity and the reuse of code to perform specific tasks.

*/


#include <stdio.h>

// Function declaration
void bakeCake(); // Declaring a function named 'bakeCake' which will be defined later

// Main function
int main() {
    bakeCake(); // Calling the 'bakeCake' function to bake a cake
    return 0;
}

// Function definition
void bakeCake() {
    printf("Mix ingredients, bake in oven, enjoy your cake!\n");
}

// The output of the above program is

/*

Mix ingredients, bake in oven, enjoy your cake!

*/