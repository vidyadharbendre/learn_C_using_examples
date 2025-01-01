#include <stdio.h>
#include <string.h>

/*
Author: Vidyadhar Bendre

Date: 7 January 2024
Date: 1 January 2025

Email: vidyadhar.bendre@gmail.com

Purpose:
- Demonstrates the use of `strncpy` from `string.h` and a user-defined string copy function.
- Shows how strings can be copied using both the built-in `strncpy` and a manually implemented string copy function with a specified number of characters.

Description:
- This program first copies a specified number of characters from the source string using the built-in `strncpy` function and then copies the same number of characters using a user-defined function `user_defined_strncpy`.
- The string copy is done using a `for` loop and the null terminator is added manually.

Note:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com) for a better understanding of how the functions work.
*/

// Function prototype for user-defined string copy
void user_defined_strncpy(char dest[], char src[], int n);

int main() {
    // Define the source string
    char source[] = "Hello, world!";
    char destination_strncpy[20];
    char destination_user_defined[20];

    // Using strncpy from string.h
    strncpy(destination_strncpy, source, 9); // Copy only first 9 characters
    destination_strncpy[9] = '\0'; // Null-terminate manually

    // Display the source and destination strings after using strncpy
    printf("Source string......................................: %s\n", source);
    printf("Destination string (using strncpy)..................: %s\n", destination_strncpy);

    // Using the user-defined string copy function
    user_defined_strncpy(destination_user_defined, source, 9); // Copy only first 9 characters

    // Display the destination string after using the user-defined function
    printf("Destination string (using user-defined function)...: %s\n", destination_user_defined);

    return 0;  // Indicate successful program execution
}

// User-defined strncpy function without pointers
void user_defined_strncpy(char dest[], char src[], int n) {
    // Use a for loop to copy the first 'n' characters or until null character is found
    for (int i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[n] = '\0'; // Null-terminate the copied string
}

// The output of the above program is shown as below:

/*
Source string......................................: Hello, world!
Destination string (using strncpy)..................: Hello, wo
Destination string (using user-defined function)...: Hello, wo
*/
