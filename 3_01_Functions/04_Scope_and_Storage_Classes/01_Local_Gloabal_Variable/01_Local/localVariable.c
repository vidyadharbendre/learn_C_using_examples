/*  
Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Date    : 4th December, 2023

Purpose  : Real-time example demonstrating Local Variables

Description:
- This program demonstrates the concept of local variables in C.
- It contains a main function that declares a local variable 'localVar' and a separate function myFunction that also declares a local variable 'localVar'.
- The program shows how 'localVar' is scoped differently in each function and does not interfere with the other.

Explanation:
- The main() function initializes and prints the value of 'localVar' declared inside it.
- It then calls myFunction() to print the value of 'localVar' declared inside the function.
- Both 'localVar' variables are separate and independent due to their different scopes.

*/

#include <stdio.h>

// Function prototype for myFunction - Declaration
void myFunction();

int main() {
    // Declaration of local variable 'localVar' inside main
    int localVar = 10; 
    printf("Value of localVar inside main: %d\n", localVar);

    // This will print the value of 'localVar' declared inside myFunction
    myFunction(); 
    // 'localVar' from myFunction and main are different and not accessible outside their respective scopes
    return 0;
}

void myFunction() {
    // Declaration of a local variable 'localVar' inside myFunction
    int localVar = 20; 
    printf("Value of localVar inside myFunction: %d\n", localVar);
}

// The output of the above program is shown as below:
/*  

Value of localVar inside main: 10
Value of localVar inside myFunction: 20

*/

/*
In the above example, localVar is declared separately inside main and myFunction. Each has its own scope and does not interfere with the other.
*/
