#include <stdio.h>
#include <string.h>

/*
Author: Vidyadhar Bendre
Date: 31 December 2024
Email: vidyadhar.bendre@gmail.com
Purpose:
- Demonstrate the use of `strcpy` from `string.h` and a user-defined string copy function.
- Show how strings can be copied using both the built-in `strcpy` and a manually implemented string copy function.

Description:
- This program first copies a string using the built-in `strcpy` function and then copies the same string using a user-defined function `user_defined_strcpy`.
- The `findStringLength` function is used to calculate the length of the source string.
- The string copy is done using a `for` loop after finding the length.

Note:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com) for a better understanding of how the functions work.
*/

// Function prototype for user-defined string length and string copy
int findStringLength(char str[]);
void user_defined_strcpy(char dest[], char src[]);

int main() {
    // Define the source string
    char source[] = "Hello, world!";
    char destination[20];

    // Using strcpy from string.h
    strcpy(destination, source);

    // Display the source and destination strings after using strcpy
    printf("Source string......................................: %s\n", source);
    printf("Destination string (using strcpy)..................: %s\n", destination);

    // Using the user-defined string copy function
    char destination_user_defined[20];
    user_defined_strcpy(destination_user_defined, source);

    // Display the destination string after using the user-defined function
    printf("Destination string (using user-defined function)...: %s\n", destination_user_defined);

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

/*
The output of the above program is shown as below:
Source string......................................: Hello, world!
Destination string (using strcpy)..................: Hello, world!
Destination string (using user-defined function)...: Hello, world!
*/
