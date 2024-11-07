/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program checks if a given character is an uppercase letter, lowercase letter, digit, 
    or special character in C without using a separate function.

    Description:
    The program reads a single character from the user and identifies its type by comparing its ASCII value.

    - If the ASCII value is between 65 and 90 (inclusive), it is an uppercase letter.
    - If the ASCII value is between 97 and 122 (inclusive), it is a lowercase letter.
    - If the ASCII value is between 48 and 57 (inclusive), it is a digit.
    - Otherwise, it is classified as a special character.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating character type detection.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    char ch;

    // Input from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Checking and classifying the character
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}

/* Example Output:
   Enter a character: A
   'A' is an uppercase letter.

   Enter a character: a
   'a' is a lowercase letter.

   Enter a character: 5
   '5' is a digit.

   Enter a character: @
   '@' is a special character.

    Enter a character: %
    '%' is a special character.

*/
