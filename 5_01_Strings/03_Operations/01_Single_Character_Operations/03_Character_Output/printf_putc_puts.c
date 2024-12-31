/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 30 December 2024

Purpose:
Demonstrate the usage of various output functions in C:
- `printf()`, `putc()`, `puts()`, and `fputs()` without file pointers.

Note:
- Use PythonTutor (https://pythontutor.com/c.html) to visualize the execution of this program step by step.
- It helps in understanding the flow of the program and how each function is called.

Description:
- `printf()` prints formatted output to the standard output (console).
- `putc()` writes a single character to the standard output.
- `puts()` writes a string to the standard output followed by a newline.
- `fputs()` writes a string to a file (we use `stdout` here to avoid file pointers).
*/

#include <stdio.h>  // Include standard input-output library

#define MAX_LENGTH 100  // Maximum buffer length for input and output

int main() {
    char ch = 'A';            // Character to demonstrate character output functions
    char str[] = "Hello, World!";  // String to demonstrate string output functions

    // Demonstrating printf()
    printf("Using printf: This is a formatted output to the console.\n");

    // Demonstrating putc() to print a character to the console
    printf("Using putc: ");
    putc(ch, stdout);  // Writes the character to the standard output (console)
    printf("\n");

    // Demonstrating puts() to print a string to the console
    printf("Using puts: ");
    puts(str);  // Writes the string to the standard output followed by a newline

    // Demonstrating fputs() to print a string to stdout (equivalent of writing to a file)
    printf("Using fputs: ");
    fputs(str, stdout);  // Writes the string to the standard output (console)

    return 0;  // Indicate successful program execution
}

// The output of the above program is shown as below
/*
Using printf: This is a formatted output to the console.
Using putc: A
Using puts: Hello, World!
Using fputs: Hello, World!%      
*/