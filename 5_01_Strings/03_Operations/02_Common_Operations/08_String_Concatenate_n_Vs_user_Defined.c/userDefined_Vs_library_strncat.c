#include <stdio.h>
#include <string.h>

/*
Author: Vidyadhar Bendre

Date: 7 January 2024
Date: 1 January 2025

Email: vidyadhar.bendre@gmail.com

Purpose:
- Demonstrates string concatenation using `strncat` and a user-defined `strncat` function.
- Concatenates the first `n` characters from one string to another.

Explanation:
- This program showcases how the built-in `strncat` function and a user-defined function can be used to concatenate strings.
- The program also provides a visualization reference on pythontutor.com for better understanding of how the functions work.

Visualization:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com) for a better understanding of how the functions work.
*/

// Function prototype for user-defined strncat
void user_defined_strncat(char dest[], char src[], int n);

int main() {
    // Define the source strings
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char dest_strncat[20];
    char dest_user_defined[20];

    // Using strncat from string.h
    strcpy(dest_strncat, str1); // Copy str1 to dest_strncat
    strncat(dest_strncat, str2, 3); // Concatenate first 3 characters of str2
    printf("String 1....................................: %s\n", str1);
    printf("String 2....................................: %s\n", str2);
    printf("Destination string (using strncat)..........: %s\n", dest_strncat);

    // Using the user-defined strncat function
    strcpy(dest_user_defined, str1); // Copy str1 to dest_user_defined
    user_defined_strncat(dest_user_defined, str2, 3); // Concatenate first 3 characters of str2
    printf("Destination string (using user-defined strncat): %s\n", dest_user_defined);

    return 0;  // Indicate successful program execution
}

// User-defined strncat function without pointers
void user_defined_strncat(char dest[], char src[], int n) {
    int dest_len = strlen(dest); // Get the current length of dest
    int i = 0;
    // Concatenate up to n characters from src to dest
    while (src[i] != '\0' && i < n) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}


// The output of the above program is shown as below:
/*
String 1....................................: Hello, 
String 2....................................: world!
Destination string (using strncat)..........: Hello, wor
Destination string (using user-defined strncat): Hello, wor
*/
