/* .  

Author:
Vidyadhar

Email:
vidyadhar.bendre@gmail.com

Data:
6th November, 2023

Purpose:

The purpose of this program is to demonstrate how to work with ASCII (American Standard Code for Information Interchange) characters in C. It assigns an ASCII character, prints its character representation and numeric value, and then loops through a range of ASCII characters, displaying them one by one.

Description:

ASCII (American Standard Code for Information Interchange) is a character encoding standard that represents text characters using 7-bit binary codes. Each code corresponds to a specific character in the English alphabet, numbers, punctuation marks, and control characters. This program serves as an illustrative example of handling ASCII characters in C.

- The program starts by assigning an ASCII character, 'A', to the variable `asciiChar`.
- It then prints the assigned ASCII character using the `%c` format specifier and its ASCII value using the `%d` format specifier.
- After printing the initial character and its value, the program enters a loop that iterates through a range of ASCII characters from 'A' to 'Z'.
- Inside the loop, it converts the loop counter `i` to a character using a typecast `(char)i` and prints each character separated by a space.
- Finally, the program adds a newline character to end the line of printed characters.

*/

#include <stdio.h>

int main() {
    char asciiChar = 'A'; // Assign an ASCII character

    printf("ASCII Character: %c\n", asciiChar);
    printf("ASCII Value: %d\n", asciiChar);

    // Loop through and print some ASCII characters
    for (int i = 65; i <= 90; i++) {
        printf("%c ", (char)i);
    }
    printf("\n");

    return 0;
}

// The output of the program as shown below:
/*

ASCII Character: A
ASCII Value: 65
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

*/