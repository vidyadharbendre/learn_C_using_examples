/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
7th January 2024

Purpose:
This program showcases string manipulation using user-defined functions in C. 
It features three primary functions: user_defined_copy, user_defined_concat, and user_defined_strlen. 
The user_defined_copy function copies one string to another, user_defined_concat concatenates strings, and user_defined_strlen calculates the length of a string.

Explanation:

user_defined_copy copies the characters of one string to another, ensuring it copies at most n characters or until the end of the source string ('\0') is reached.
user_defined_concat appends at most n characters from one string to another, starting from the end of the destination string. It ensures proper null termination after appending.
user_defined_strlen calculates the length of a string by iterating through its characters until encountering the null terminator.

Output:
The program's output demonstrates the source strings, "Hello" and "World". It then copies "Hello" to dest, displaying the copied string. Finally, it appends the first three characters of "World" to dest, showing the appended string.
*/



#include <stdio.h>

// Function to copy the source string to the destination string
void user_defined_copy(char dest[], const char src[], int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Null-terminate the copied string
}

// Function to concatenate two strings up to n characters of the second string
void user_defined_concat(char dest[], const char src[], int n) {
    int dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}

// Function to calculate the length of a string
int user_defined_strlen(const char src[]) {
    int len = 0;
    while (src[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string

    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    // Copying str1 to dest
    user_defined_copy(dest, str1, user_defined_strlen(str1));
    printf("Copied string: %s\n", dest);

    // Appending the first 3 characters of str2 to dest
    user_defined_concat(dest, str2, 3);
    printf("Appended string: %s\n", dest);

    return 0;
}

// The output of the above program is shown as below:

/*
Source string 1: Hello
Source string 2: World
Copied string: Hello
Appended string: HelloWor

[Done] exited with code=0 in 0.262 seconds
*/