#include <stdio.h>
#include <ctype.h>

int isUpperCase(char fch);
int isLowerCase(char fch);
void printCaseUserDefined(char fch);
void printCaseLibrary(char fch);

int main() {
    char character = 'A';

    printf("Using user-defined function:\n");
    printCaseUserDefined(character);

    printf("\nUsing library function:\n");
    printCaseLibrary(character);

    return 0;
}

// User-defined function to check if a character is uppercase
int isUpperCase(char fch) {
    return (fch >= 'A' && fch <= 'Z');
}

// User-defined function to check if a character is lowercase
int isLowerCase(char fch) {
    return (fch >= 'a' && fch <= 'z');
}

// Function to print character case using user-defined function
void printCaseUserDefined(char fch) {
    if (isUpperCase(fch)) {
        printf("%c is an uppercase letter.\n", fch);
    } else if (isLowerCase(fch)) {
        printf("%c is a lowercase letter.\n", fch);
    } else {
        printf("%c is not a letter.\n", fch);
    }
}

// Function to print character case using library function from ctype.h
void printCaseLibrary(char fch) {
    if (isupper(fch)) {
        printf("%c is an uppercase letter.\n", fch);
    } else if (islower(fch)) {
        printf("%c is a lowercase letter.\n", fch);
    } else {
        printf("%c is not a letter.\n", fch);
    }
}

// The output of the above program is shown as below:
/*
Using user-defined function:
A is an uppercase letter.

Using library function:
A is an uppercase letter.
*/