/*  
Author   : Vidyadhar Bendre
Email    : vidyadhar.bendre@gmail.com
Date     : 4th December, 2023

Purpose  : Real-time example demonstrating Global Variables

Description:
- This program showcases the use of global variables in C.
- It declares a global variable 'globalVar' and a function 'myFunction'.
- The main function prints the value of 'globalVar', calls myFunction, increments 'globalVar', and then calls myFunction again.

Explanation:
- 'globalVar' is declared outside any function, making it a global variable accessible throughout the program.
- The main() function initially prints the value of 'globalVar' and calls myFunction, showing the same value.
- After incrementing 'globalVar', the main function prints the updated value and calls myFunction again, displaying the updated value.
- Global variables retain their values and can be accessed and modified from any part of the program.

*/

#include <stdio.h>

// Declaration of a global variable 'globalVar'
int globalVar = 100; 

// Declaration of a function
void myFunction();

int main() {
    printf("Value of globalVar inside main: %d\n", globalVar);
    // This will print the value of the global variable 'globalVar'
    myFunction(); 
    // 'globalVar' can be accessed and modified from any part of the program
    globalVar++;
    printf("Value of globalVar inside main: %d\n", globalVar);
    myFunction(); 
    return 0;
}

void myFunction() {
    printf("Value of globalVar inside myFunction: %d\n", globalVar);
}

// The output of the above program is
/* 

Value of globalVar inside main: 100
Value of globalVar inside myFunction: 100
Value of globalVar inside main: 101
Value of globalVar inside myFunction: 101

*/
