#include <stdio.h>

// Global variable (default `extern`)
int globalVar = 50;

// Function to demonstrate `static` and `auto`
void demonstrateStaticAndAuto() {
    static int staticVar = 0; // `static` retains its value between function calls
    auto int autoVar = 10;    // `auto` (default for local variables)
    
    staticVar++; // Increment staticVar
    autoVar++;   // Increment autoVar

    printf("Inside function: Static Var = %d, Auto Var = %d\n", staticVar, autoVar);
}

// Function to demonstrate `register`
void demonstrateRegister() {
    register int regVar = 5; // `register` suggests faster access by storing in a CPU register
    printf("Register Var = %d\n", regVar);
}

int main() {
    printf("Global Var (Extern): %d\n", globalVar); // Access global variable

    // Call function to demonstrate `static` and `auto`
    printf("Calling demonstrateStaticAndAuto() twice:\n");
    demonstrateStaticAndAuto(); // Static retains value, auto resets
    demonstrateStaticAndAuto(); // Observe staticVar retains incremented value

    // Call function to demonstrate `register`
    demonstrateRegister();

    return 0;
}
// The output of the above program is shown as below:
/*
Global Var (Extern): 50
Calling demonstrateStaticAndAuto() twice:
Inside function: Static Var = 1, Auto Var = 11
Inside function: Static Var = 2, Auto Var = 11
Register Var = 5
*/