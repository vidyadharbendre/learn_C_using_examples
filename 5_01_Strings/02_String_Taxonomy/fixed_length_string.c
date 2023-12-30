#include <stdio.h>
#include <string.h>

int main() {
    // Static Allocation: Fixed-length string with a predetermined size
    char fixedString[20]; // Declaring a fixed-length string capable of holding 19 characters + null terminator

    // Initialization
    strcpy(fixedString, "Hello, World!"); // Copying a string into the fixed-length string

    // Printing the fixed-length string
    printf("Fixed-Length String: %s\n", fixedString);

    // Attempting to exceed the predetermined capacity (may lead to buffer overflow)
    strcat(fixedString, " This is an attempt to exceed the buffer limit."); // Concatenating to exceed the capacity

    // Printing the modified string (if the attempt caused a buffer overflow, behavior is unpredictable)
    printf("Modified String: %s\n", fixedString);

    return 0;
}

// The output of the above program is shown as below:
/*  
Fixed-Length String: Hello, World!
zsh: trace trap  ./fixed_length_string
*/