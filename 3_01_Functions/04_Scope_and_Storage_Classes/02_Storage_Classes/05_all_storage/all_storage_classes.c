/*
    Name of the Program: Storage Class Demonstration
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program demonstrates the usage and scope of different storage classes in C:
                 - `auto`: The default storage class for local variables, limited to the scope of the function.
                 - `register`: Used to request that a variable be stored in a CPU register for faster access.
                 - `static`: Persists for the lifetime of the program, retains 
                    its value across function calls, but is scoped to the 
                    function or file.
                 - `extern`: Allows access to variables defined outside the 
                    current file (used for linking across multiple files).
                 
    Version History:
        Version 1.0 - [Date: 2024-12-04] - Initial version demonstrating the use of all storage classes.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

void functionWithAuto();       // Function using 'auto'
void functionWithRegister();   // Function using 'register'
void functionWithStatic();     // Function using 'static'
void functionWithExtern();     // Function using 'extern'

// 'extern' declaration to use variable defined outside this function
extern int externVar;

int externVar = 100; // Definition of 'extern' variable

int main() {
    // Demonstrating 'auto' storage class (implicitly the default for local variables)
    functionWithAuto();
    
    // Demonstrating 'register' storage class
    functionWithRegister();
    
    // Demonstrating 'static' storage class
    functionWithStatic();
    
    // Demonstrating 'extern' storage class
    functionWithExtern();
    
    return 0; // Return 0 to indicate successful completion
}

void functionWithAuto() {
    auto int num = 5; // 'auto' is default for local variables
    printf("Inside functionWithAuto: num = %d\n", num);
}

void functionWithRegister() {
    register int regVar = 10; // 'register' requests fast access from CPU register
    printf("Inside functionWithRegister: regVar = %d\n", regVar);
}

void functionWithStatic() {
    static int staticVar = 0; // 'static' persists across function calls
    staticVar++;
    printf("Inside functionWithStatic: staticVar = %d\n", staticVar);
}

void functionWithExtern() {
    printf("Inside functionWithExtern: externVar = %d\n", externVar); // Accessing 'extern' variable
}

// The output of the above program is shown as below:
/*  

Inside functionWithAuto: num = 5
Inside functionWithRegister: regVar = 10
Inside functionWithStatic: staticVar = 1
Inside functionWithStatic: staticVar = 2
Inside functionWithExtern: externVar = 100

*/

