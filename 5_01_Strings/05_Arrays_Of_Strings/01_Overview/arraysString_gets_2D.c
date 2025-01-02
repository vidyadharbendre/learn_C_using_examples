#include <stdio.h>   // Include standard input-output library
#include <string.h>  // Include string library for handling strings

/*
Author: Vidyadhar Bendre
Date: 2 January 2025
email: vidyadhar.bendre@gmail.com
Purpose: Read an array of strings using `fgets` and print them using `puts`.

Description:
- This program initializes an array of empty strings.
- It reads strings from the user into the array using `fgets`.
- A loop is used to print each string using `puts`.
- `fgets` is safe as it checks array boundaries and avoids buffer overflows.

*/

int main() {
    // Declaration of an array of strings
    char strings[5][20]; // 5 strings, each with a maximum length of 19 characters + null terminator

    // Prompt the user for input
    printf("Enter 5 strings (each up to 19 characters):\n");

    // Loop to read strings using fgets
    for (int i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin); // Read string safely into the array
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove trailing newline character
    }

    // Print header message
    printf("\nYou entered the following strings:\n");

    // Loop to print strings using puts
    for (int i = 0; i < 5; i++) {
        puts(strings[i]); // Print the string in the current row
    }

    return 0;  // Indicate successful program execution
}
// The output of the above program is shown as below:
/*
Enter 5 strings (each up to 19 characters):
Enter string 1: Hello
Enter string 2: World
Enter string 3: Programming
Enter string 4: In
Enter string 5: C

You entered the following strings:
Hello
World
Programming
In
C
*/