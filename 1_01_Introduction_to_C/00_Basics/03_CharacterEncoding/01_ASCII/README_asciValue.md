# ASCII Character Handling Program

## Purpose:

The purpose of this program is to demonstrate how to work with ASCII (American Standard Code for Information Interchange) characters in C. It assigns an ASCII character, prints its character representation and numeric value, and then loops through a range of ASCII characters, displaying them one by one.

## Description:

ASCII (American Standard Code for Information Interchange) is a character encoding standard that represents text characters using 7-bit binary codes. Each code corresponds to a specific character in the English alphabet, numbers, punctuation marks, and control characters. This program serves as an illustrative example of handling ASCII characters in C.

- The program starts by assigning an ASCII character, 'A', to the variable `asciiChar`.
- It then prints the assigned ASCII character using the `%c` format specifier and its ASCII value using the `%d` format specifier.
- After printing the initial character and its value, the program enters a loop that iterates through a range of ASCII characters from 'A' to 'Z'.
- Inside the loop, it converts the loop counter `i` to a character using a typecast `(char)i` and prints each character separated by a space.
- Finally, the program adds a newline character to end the line of printed characters.

The output of the program will display the ASCII character 'A', its ASCII value (65), and a sequence of uppercase English letters from 'A' to 'Z', each separated by a space.

