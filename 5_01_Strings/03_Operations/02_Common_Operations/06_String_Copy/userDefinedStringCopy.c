

/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
7th January 2024

Purpose:
This program demonstrates string appending and copying without using pointers in C. It appends two strings to a destination string and copies one string to another.

Explanation:
- The program defines two user-defined functions: user_defined_append and user_defined_copy.
- The main function initializes source strings, str1 and str2, and destination strings, dest and dest_copy.
- The source strings are displayed.
- user_defined_copy copies str2 to dest_copy using a user-defined function without using pointers.
- user_defined_append appends str1 and str2 to dest using a user-defined function without pointers.
- The output displays the copied string and the appended string.

Note:
- Both user-defined functions manipulate character arrays directly without using pointers.
*/

#include <stdio.h>
#include <string.h>

// Function prototypes
void user_defined_append(char dest[], int dest_max_length, const char src[]);
void user_defined_copy(char dest[], int dest_max_length, const char src[]);

int main() {
    // Initialization
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string
    char dest_copy[50] = ""; // Initialize dest_copy as an empty string

    // Display source strings
    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    // Copy str2 to dest_copy
    user_defined_copy(dest_copy, sizeof(dest_copy), str2);
    printf("Copied string: %s\n", dest_copy);

    // Append str1 and str2 to dest
    user_defined_append(dest, sizeof(dest), str1);
    user_defined_append(dest, sizeof(dest), str2);
    printf("Appended string: %s\n", dest);

    return 0;
}

// User-defined string appending function without pointers
void user_defined_append(char dest[], int dest_max_length, const char src[]) {
    int dest_len = strlen(dest); // Calculate the current length of dest

    // Append src to dest character by character
    int i = 0;
    while (src[i] != '\0' && dest_len < dest_max_length - 1) {
        dest[dest_len] = src[i];
        i++;
        dest_len++;
    }

    dest[dest_len] = '\0'; // Null-terminate the appended string
}

// User-defined string copying function without pointers
void user_defined_copy(char dest[], int dest_max_length, const char src[]) {
    // Copy src to dest character by character
    int i = 0;
    while (src[i] != '\0' && i < dest_max_length - 1) {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0'; // Null-terminate the copied string
}

// The output of the above program is shown below:

/*
Source string 1: Hello
Source string 2: World
Copied string: World
Appended string: HelloWorld

[Done] exited with code=0 in 0.111 seconds
*/