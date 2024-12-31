#include <stdio.h>   // Include standard input-output library
#include <string.h>  // Include string library for strlen function

/*
Author: Vidyadhar Bendre
Date: 31 December 2024
email: vidyadhar.bendre@gmail.com
Purpose: Calculate the length of a string using both a user-defined function and the library function `strlen`.

Description:
- This program demonstrates two approaches to finding the length of a string:
  1. Using a user-defined function (`findStringLength`) that iterates through the string.
  2. Using the standard library function `strlen` for comparison.
- The results of both methods are printed for verification.

Note:
- You can visualize the execution of this program step-by-step using [pythontutor.com](https://pythontutor.com) for a better understanding of how the functions work.
*/

// Function prototype for user-defined string length calculation
int findStringLength(char charArray[]);

int main() {
    // Define the input string
    char inputString[] = "Vidyadhar";

    // Calculate and print string length using user-defined function
    printf("Length using UDF is ...............: %d\n", findStringLength(inputString));

    // Calculate and print string length using library function
    printf("Length using Library function is...: %lu\n", strlen(inputString));

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
// The output of the above program is shown as below:
/*
Length using UDF is ...............: 9
Length using Library function is...: 9
*/