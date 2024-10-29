/*
    Name of the Program: Character Type Identification
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program identifies the type of a single character input by the user.
    It categorizes the character as:
        - Uppercase letter: if it is between 'A' and 'Z'
        - Lowercase letter: if it is between 'a' and 'z'
        - Digit: if it is between '0' and '9'
        - Special character: for all other characters

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with a note for PythonTutor.com 
        for visualizing C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Determine the type of character input
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }

    return 0;
}

// Compilation command: gcc characterClassification.c -o characterClassification
// Execution command: ./characterClassification

/* Example Outputs:

Case 1:
Enter a character: X
Uppercase letter

Case 2:
Enter a character: m
Lowercase letter

Case 3:
Enter a character: 7
Digit

Case 4:
Enter a character: @
Special character

Case 5:
Enter a character: %
Special character

*/
