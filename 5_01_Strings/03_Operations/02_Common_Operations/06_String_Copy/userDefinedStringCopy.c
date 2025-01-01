#include <stdio.h>

/*
Author: Vidyadhar Bendre
Date: 31 December 2024
Email: vidyadhar.bendre@gmail.com
Purpose:
- Demonstrate a user-defined string copy function without pointers in C.

Description:
- This program defines a user-defined function `user_defined_strcpy` to copy a string from the source to the destination.
- The `findStringLength` function is used to find the length of the source string.

Note:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com).
*/

// Function prototype for user-defined string length and string copy
int findStringLength(char str[]);
void user_defined_strcpy(char dest[], char src[]);

int main() {
    // Define the source string
    char source[] = "Hello, world!";
    char destination[20];

    // Using the user-defined string copy function
    user_defined_strcpy(destination, source);

    // Display the destination string after using the user-defined function
    printf("Source string......................................: %s\n", source);
    printf("Destination string (using user-defined function)...: %s\n", destination);

    return 0;  // Indicate successful program execution
}

// Function to find the length of a string
int findStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// User-defined string copy function without pointers
void user_defined_strcpy(char dest[], char src[]) {
    int length = findStringLength(src);  // Get the length of the source string
    
    // Use a for loop to copy each character from source to destination
    for (int i = 0; i < length; i++) {
        dest[i] = src[i];
    }
    dest[length] = '\0';  // Null-terminate the copied string
}

// The output of the above program is shown as below:
/*
Source string......................................: Hello, world!
Destination string (using user-defined function)...: Hello, world!
*/
