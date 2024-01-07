/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
7th January 2024

Purpose:
This program demonstrates string appending without using pointers in C. It appends two strings to a destination string.

Explanation:
- The program defines a user-defined function 'user_defined_append' to append one string to another without using pointers.
- Three strings, str1, str2, and dest, are initialized with "Hello", "World", and an empty string respectively.
- The user-defined function 'user_defined_append' appends str1 to dest and then appends str2 to the resulting dest string.
- The output displays the appended string.

Note:
- This implementation appends strings by manipulating character arrays directly, without using pointers.
*/

#include <stdio.h>
#include <string.h>

void user_defined_append(char dest[], int dest_max_length, const char src[]);

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string

    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    user_defined_append(dest, sizeof(dest), str1);
    user_defined_append(dest, sizeof(dest), str2);

    printf("Appended string: %s\n", dest);

    return 0;
}

// User-defined string appending function without pointers
void user_defined_append(char dest[], int dest_max_length, const char src[]) {
    int dest_len = strlen(dest);
    int i;

    for (i = 0; src[i] != '\0' && dest_len < dest_max_length - 1; i++, dest_len++) {
        dest[dest_len] = src[i];
    }

    dest[dest_len] = '\0'; // Null-terminate the appended string
}

// The output of the above program is shown below:
/*
Source string 1: Hello
Source string 2: World
Appended string: HelloWorld
*/