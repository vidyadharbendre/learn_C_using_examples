#include <stdio.h>

/*
Author: Vidyadhar Bendre
Date: 7 January 2024
Date: 1 January 2025

Email: vidyadhar.bendre@gmail.com
Purpose:
- Demonstrates string manipulation using user-defined functions in C. 
- Features three primary functions: user_defined_copy, user_defined_concat, and user_defined_strlen. 
- user_defined_copy copies one string to another, user_defined_concat concatenates strings, and user_defined_strlen calculates the length of a string.

Description:
- user_defined_copy copies at most `n` characters from the source string to the destination string.
- user_defined_concat appends at most `n` characters from the source string to the destination string, starting from the end of the destination string.
- user_defined_strlen calculates the length of a string by iterating through it until it encounters the null terminator.

Note:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com) for a better understanding of how the functions work.
*/

// Function prototype for user-defined string operations
void user_defined_copy(char dest[], const char src[], int n);
void user_defined_concat(char dest[], const char src[], int n);
int user_defined_strlen(const char src[]);

int main() {
    // Define the source strings
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string

    // Display the source strings
    printf("Source string 1....................................: %s\n", str1);
    printf("Source string 2....................................: %s\n", str2);

    // Copying str1 to dest
    user_defined_copy(dest, str1, user_defined_strlen(str1));
    printf("Copied string.....................................: %s\n", dest);

    // Appending the first 3 characters of str2 to dest
    user_defined_concat(dest, str2, 3);
    printf("Appended string...................................: %s\n", dest);

    return 0;  // Indicate successful program execution
}

// User-defined function to copy the source string to the destination string
void user_defined_copy(char dest[], const char src[], int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Null-terminate the copied string
}

// User-defined function to concatenate the source string to the destination string
void user_defined_concat(char dest[], const char src[], int n) {
    int dest_len = 0;
    // Find the length of the destination string
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    int i;
    // Append at most n characters from src to dest
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}

// User-defined function to calculate the length of a string
int user_defined_strlen(const char src[]) {
    int len = 0;
    // Iterate through the string until the null terminator is encountered
    while (src[len] != '\0') {
        len++;
    }
    return len;
}

// The output of the above program is shown as below:

/*
Source string 1....................................: Hello
Source string 2....................................: World
Copied string.....................................: Hello
Appended string...................................: HelloWor
*/
