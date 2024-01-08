#include <stdio.h>
#include <ctype.h>

// user defined function declaration to check if a character is an alphabet
int isAlpha(char ch);

// User-defined function declaration to check if a character is a digit
int isDigit(char ch);

// Function declaration to print character properties using user-defined functions
void printPropertiesUserDefined(char ch);

// Function to print character properties using library functions from ctype.h
void printPropertiesLibrary(char ch);


int main() {
    char character = '7';

    printf("Using user-defined functions:\n");
    printPropertiesUserDefined(character);

    printf("\nUsing library functions:\n");
    printPropertiesLibrary(character);

    return 0;
}

// User-defined function to check if a character is an alphabet
int isAlpha(char ch) {
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

// User-defined function to check if a character is a digit
int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

// Function to print character properties using user-defined functions
void printPropertiesUserDefined(char ch) {
    if (isAlpha(ch)) {
        printf("%c is an alphabet.\n", ch);
    } else if (isDigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is neither an alphabet nor a digit.\n", ch);
    }
}

// Function to print character properties using library functions from ctype.h
void printPropertiesLibrary(char ch) {
    if (isalpha(ch)) {
        printf("%c is an alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is neither an alphabet nor a digit.\n", ch);
    }
}

// The output of the above program is shown as below:

/*
Using user-defined functions:
7 is a digit.

Using library functions:
7 is a digit.
*/