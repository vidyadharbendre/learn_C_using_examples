#include <stdio.h>

/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
7 January 2024

Purpose: 
This C program demonstrates the use of characters and strings in C programming language. It showcases the declaration and printing of a single character and a string of characters using printf statements.

Explanation:
- The program begins with the inclusion of the standard input-output library <stdio.h>.
- In the main function:
    - A character variable, myChar, is declared and initialized with the character 'A'.
    - Using printf, it displays the value of myChar with the format specifier %c, showcasing the character representation.
    - An array of characters, myString, is initialized with the string "Hello".
    - Another printf statement displays the value of myString using the %s format specifier, printing the entire string.
- Both character and string values are printed to the console output.
- The program ends by returning 0, indicating successful execution.

*/





int main() {
    // Character example
    char myChar = 'A';
    printf("Character: %c\n", myChar);

    // String example
    char myString[] = "Hello";
    printf("String: %s\n", myString);

    return 0;
}

// The output of the above program is shown as below:

/* 
Character: A
String: Hello
*/