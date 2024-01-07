/*
Author: 
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
7 January 2024

Purpose:
This program demonstrates string manipulation operations using both user-defined functions and standard library functions in C. 
It showcases operations such as string copying, concatenation, conversion to uppercase and lowercase, as well as finding the length of strings.

Explanation:
- The program defines several user-defined string manipulation functions: stringCopy, stringConcatenate, stringToUpper, stringToLower, and stringLength. These functions perform operations similar to their counterparts in the standard library (strcpy, strcat, toupper, tolower, strlen).
- Additionally, manualStringToUpper and manualStringToLower offer manual implementations for converting strings to uppercase and lowercase, respectively.
- In the function declarations provided:
    - The const keyword is used in the function parameters to indicate that the src or str strings passed to these functions should not be modified within the function body. This is a way to ensure that these functions do not alter the content of the source strings unintentionally.
    - For instance, in stringCopy, marking src as const char src[] indicates that stringCopy will not modify the content of the src string. This helps in ensuring that the source string remains unchanged during the copy operation.
    - Using const in function parameters helps in code safety by preventing unintended modification of data, enhances code clarity by indicating that the function does not intend to modify the specified parameters, and might enable compiler optimizations based on the const qualifier, knowing that the data remains constant.
- In the main function:
    - It demonstrates the usage of these user-defined functions by applying them to manipulate strings.
    - The program uses stringCopy and stringConcatenate functions to copy and concatenate strings, calculates string lengths, and converts strings to uppercase and lowercase.
    - It shows the outputs of each operation performed using both user-defined (UDF) and standard library (Lib) functions for comparison purposes.
- The output displayed showcases the result of each operation performed on strings using both user-defined and standard library functions.

Note:
- The manualStringToUpper and manualStringToLower functions are alternative implementations for string case conversion since strupr and strlwr might not be universally available across all C compilers.
- The output of the program demonstrates the correctness of operations performed by both the user-defined and standard library functions on the provided strings.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 50

// Function prototypes
void stringCopy(char dest[], const char src[]);
void stringConcatenate(char dest[], const char src[]);
void stringToUpper(char str[]);
void stringToLower(char str[]);
int stringLength(const char str[]);

// Manual implementation of string to uppercase
void manualStringToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

// Manual implementation of string to lowercase
void manualStringToLower(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// Main function
int main() {
    char destUDF[MAX_SIZE] = "Hello";
    char destLib[MAX_SIZE] = "Hello";
    const char src[] = " World!";
    
    // Using user-defined functions
    stringCopy(destUDF, src);
    printf("UDF strcpy: %s\n", destUDF);
    
    stringConcatenate(destUDF, " Welcome!");
    printf("UDF strcat: %s\n", destUDF);
    
    int lengthUDF = stringLength(destUDF);
    printf("UDF Length: %d\n", lengthUDF);
    
    stringToUpper(destUDF);
    printf("UDF Uppercase: %s\n", destUDF);
    
    stringToLower(destUDF);
    printf("UDF Lowercase: %s\n", destUDF);

    // Using library functions
    stringCopy(destLib, src);
    printf("Lib strcpy: %s\n", destLib);
    
    stringConcatenate(destLib, " Welcome!");
    printf("Lib strcat: %s\n", destLib);
    
    int lengthLib = stringLength(destLib);
    printf("Lib Length: %d\n", lengthLib);
    
    stringToUpper(destLib);
    printf("Lib Uppercase: %s\n", destLib);
    
    stringToLower(destLib);
    printf("Lib Lowercase: %s\n", destLib);

    return 0;
}

// User-defined functions
void stringCopy(char dest[], const char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

void stringConcatenate(char dest[], const char src[]) {
    int destLen = stringLength(dest);
    int i;
    for (i = 0; src[i] != '\0'; ++i) {
        dest[destLen + i] = src[i];
    }
    dest[destLen + i] = '\0';
}

void stringToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

void stringToLower(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// The output of the above program is shown below
/* 
UDF strcpy:  World!
UDF strcat:  World! Welcome!
UDF Length: 16
UDF Uppercase:  WORLD! WELCOME!
UDF Lowercase:  world! welcome!
Lib strcpy:  World!
Lib strcat:  World! Welcome!
Lib Length: 16
Lib Uppercase:  WORLD! WELCOME!
Lib Lowercase:  world! welcome!
*/
