#include <stdio.h>   // Include standard input-output library
#include <string.h>  // Include string library for strlen and strcmp functions

/*
Author: Vidyadhar Bendre
Date: 31 December 2024
email: vidyadhar.bendre@gmail.com
Purpose: Calculate the length of a string using both a user-defined function and the library function `strlen`, 
         and compare two strings using both a user-defined function and the library function `strcmp`.

Description:
- This program demonstrates two approaches to finding the length of a string:
  1. Using a user-defined function (`findStringLength`) that iterates through the string.
  2. Using the standard library function `strlen` for comparison.
- It also compares two strings using both `strcmp` from the library and a user-defined function `findStrCmp`.

Note:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com) for a better understanding of how the functions work.
*/

// Function prototype for user-defined string length calculation
int findStringLength(char charArray[]);

// Function prototype for user-defined string comparison
int findStrCmp(char str1[], char str2[]);

int main() {
    // Define the input strings
    char inputString[] = "Vidyadhar";
    char compareString[] = "Vidyadhar";  // String to compare with

    // Calculate and print string length using user-defined function
    printf("Input string: %s\n", inputString);
    printf("Length using UDF is ...............: %d\n", findStringLength(inputString));

    // Calculate and print string length using library function
    printf("Length using Library function is...: %lu\n", strlen(inputString));

    // Compare the strings using strcmp (library function)
    printf("\nComparing strings (using strcmp):\n");
    printf("String 1: %s\n", inputString);
    printf("String 2: %s\n", compareString);
    if (strcmp(inputString, compareString) == 0) {
        printf("Strings (using strcmp) are equal.\n");
    } else {
        printf("Strings (using strcmp) are not equal.\n");
    }

    // Compare the strings using the user-defined strcmp (findStrCmp)
    printf("\nComparing strings (using UDF):\n");
    printf("String 1: %s\n", inputString);
    printf("String 2: %s\n", compareString);
    if (findStrCmp(inputString, compareString) == 0) {
        printf("Strings (using UDF) are equal.\n");
    } else {
        printf("Strings (using UDF) are not equal.\n");
    }

    return 0;  // Indicate successful program execution
}

/*
Function: findStringLength
Purpose:
- Calculate the length of a given string by iterating through each character until the null terminator (`\0`) is reached.

Parameters:
- fcharArray: The input character array (string) whose length is to be calculated.

Returns:
- The length of the string as an integer.
*/
int findStringLength(char fcharArray[]) {
    int flength = 0;  // Initialize length to 0

    // Iterate through the string until the null character is encountered
    while (fcharArray[flength] != '\0') {
        flength++;  // Increment the length counter
    }

    return flength;  // Return the calculated length
}

/*
Function: findStrCmp
Purpose:
- Compare two strings character by character.

Parameters:
- str1, str2: The input strings to compare.

Returns:
- 0 if the strings are equal, a non-zero value if they are not equal.
*/
int findStrCmp(char str1[], char str2[]) {
    int i = 0;
    
    // Compare each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 1;  // Strings are not equal
        }
        i++;
    }

    // If one string ends before the other, they're not equal
    if (str1[i] != str2[i]) {
        return 1;
    }

    return 0;  // Strings are equal
}
// The output of the above program is shown as below:
/*
Input string: Vidyadhar
Length using UDF is ...............: 9
Length using Library function is...: 9

Comparing strings (using strcmp):
String 1: Vidyadhar
String 2: Vidyadhar
Strings (using strcmp) are equal.

Comparing strings (using UDF):
String 1: Vidyadhar
String 2: Vidyadhar
Strings (using UDF) are equal.
*/