/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
01 January 2025

Purpose:
This program demonstrates string concatenation in C using:
1. A user-defined function (`simple_append`) without using pointers.
2. A user-defined function (`findStringLength`) to determine the length of strings.
3. The standard library function `strcat` for comparison.

Explanation:
- The `simple_append` function concatenates two strings using array indices, ensuring no pointers are used.
- The `findStringLength` function calculates the length of a string by iterating through its characters.
- Two strings (`str1` and `str2`) are appended to a destination string (`dest`) separately using both methods.
- The results of both methods are printed for comparison.

Note:
You can visualize this program's step-by-step execution using [pythontutor.com](https://pythontutor.com).
*/

#include <stdio.h>
#include <string.h> // Ensure <string.h> is included for strcat

// Function prototypes
void simple_append(char dest[], char src[]);
int findStringLength(char str[]);

int main() {
    char str1[] = "Hello";  // Source string 1
    char str2[] = "World";  // Source string 2
    char dest1[50] = "";    // Destination string for user-defined function
    char dest2[50] = "";    // Destination string for library function

    // Print original strings
    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    // Print string lengths using user-defined function
    printf("Length of Source string 1: %d\n", findStringLength(str1));
    printf("Length of Source string 2: %d\n", findStringLength(str2));

    // Using user-defined function to append
    simple_append(dest1, str1);
    simple_append(dest1, str2);

    // Using library function strcat to append
    strcat(dest2, str1); // Library-based appending
    strcat(dest2, str2);

    // Print the results
    printf("\nAppended string using user-defined function: %s\n", dest1);
    printf("Appended string using library function: %s\n", dest2);

    return 0;
}

/*
Function: simple_append
Purpose:
- Concatenate one string to another without using pointers.
- It appends characters from `src` to `dest` using array indices.

Parameters:
- dest: Destination string (char array) to which `src` is appended.
- src: Source string (char array) to append to `dest`.

Returns:
- Modifies the `dest` array directly to include the appended `src` string.
*/
void simple_append(char dest[], char src[]) {
    int dest_len = findStringLength(dest);  // Find length of destination string
    int i = 0;  // Initialize index for src

    // Append src to dest
    while (src[i] != '\0') {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    // Null-terminate the resulting string
    dest[dest_len] = '\0';
}

/*
Function: findStringLength
Purpose:
- Calculate the length of a given string by iterating through each character until the null terminator (`\0`) is reached.

Parameters:
- str: The input string (char array) whose length is to be calculated.

Returns:
- The length of the string as an integer.
*/
int findStringLength(char str[]) {
    int length = 0;  // Initialize length to 0

    // Iterate through the string until the null character is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;  // Return the calculated length
}

// The output of the above program is as follows:
/*
Source string 1: Hello
Source string 2: World
Length of Source string 1: 5
Length of Source string 2: 5

Appended string using user-defined function: HelloWorld
Appended string using library function: HelloWorld
*/
