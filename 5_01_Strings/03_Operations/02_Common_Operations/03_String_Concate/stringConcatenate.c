/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
07 January 2024
31 December 2024

Purpose:
This program demonstrates string concatenation without using pointers in C. It concatenates two strings to a destination string.

Explanation:
- The program defines a user-defined function 'user_defined_concatenate' to concatenate two strings without using pointers.
- Three strings, str1, str2, and dest, are initialized with "Hello", "World", and an empty string respectively.
- The user-defined function 'user_defined_concatenate' concatenates str1 and str2 into the dest string.
- The output displays the concatenated string.

Note:
- This implementation concatenates strings by manipulating character arrays directly, without using pointers.
- For better visualization of the code execution step-by-step, you can use [pythontutor.com](https://pythontutor.com/).
*/

#include <stdio.h>
#include <string.h>

// User-defined function to concatenate two strings without pointers
void user_defined_concatenate(char dest[], const char src[]);

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string

    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    // Concatenate using user-defined function
    user_defined_concatenate(dest, str1);
    user_defined_concatenate(dest, str2);

    printf("Concatenated string (without strcat): %s\n", dest);

    // Concatenate using strcat to compare
    strcat(dest, str2);
    printf("Concatenated string (using strcat): %s\n", dest);

    return 0;
}

// User-defined string concatenation function without pointers
void user_defined_concatenate(char dest[], const char src[]) {
    int dest_len = strlen(dest); // Get the current length of the destination string
    int i;

    // Append each character from src to dest
    for (i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i]; // Add character from src to the end of dest
    }

    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}

// The Output of the program is shown as below:
/*
Source string 1: Hello
Source string 2: World
Concatenated string (without strcat): HelloWorld
Concatenated string (using strcat): HelloWorldWorld
*/
