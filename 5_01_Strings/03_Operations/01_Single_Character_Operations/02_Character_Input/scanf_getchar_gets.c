/*
Author: 
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 30 December 2024

Purpose:
Demonstrate the usage of different input functions in C:
- `scanf()`, `getchar()`, `fgets()`, and `gets()`

Description:
- The program uses `scanf()` to read a single word input.
- `getchar()` is used to read characters one by one.
- `fgets()` is used to read a full line of input.
- `gets()` is included for demonstration purposes, but it is deprecated due to potential security vulnerabilities.
*/

#include <stdio.h>  // Include standard input-output library

#define MAX_LENGTH 100  // Maximum length for fgets and gets input

int main() {
    char name[50];      // Buffer for storing a single word input
    char buffer[MAX_LENGTH];  // Buffer for fgets and gets input
    char ch;            // Variable to store characters from getchar()

    // Demonstrate scanf("%s")
    printf("Enter a word (scanf with %%s): ");
    scanf("%s", name);  // Reads a single word, stops at space or newline
    printf("You entered (using scanf): %s\n", name);

    // Clear the input buffer
    while ((ch = getchar()) != '\n' && ch != EOF);  // Clear newline left in the buffer

    // Demonstrate getchar()
    printf("Enter characters one by one (using getchar() and press Enter to stop):\n");
    while ((ch = getchar()) != '\n') {
        printf("You entered (using getchar): %c\n", ch);
    }

    // Clear the input buffer again
    while ((ch = getchar()) != '\n' && ch != EOF);  // Clear newline left in the buffer

    // Demonstrate fgets()
    printf("Enter a line of text (using fgets): ");
    fgets(buffer, MAX_LENGTH, stdin);  // Reads a full line of input
    printf("You entered (using fgets): %s\n", buffer);

    // Clear the input buffer
    while ((ch = getchar()) != '\n' && ch != EOF);  // Clear newline left in the buffer

/*    // Demonstrate gets() - Deprecated, but included for demonstration purposes
    printf("Enter a line of text (using gets): ");
    gets(buffer);  // Reads a full line of input (unsafe)
    printf("You entered (using gets): %s\n", buffer);
*/
    return 0;  // Indicate successful program execution
}

// The output of the above program is shown as below
/*
Enter a word (scanf with %s): Vidyadhar Bendre
You entered (using scanf): Vidyadhar
Enter characters one by one (using getchar() and press Enter to stop):
Vidyadhar Bendre
You entered (using getchar): V
You entered (using getchar): i
You entered (using getchar): d
You entered (using getchar): y
You entered (using getchar): a
You entered (using getchar): d
You entered (using getchar): h
You entered (using getchar): a
You entered (using getchar): r
You entered (using getchar):  
You entered (using getchar): B
You entered (using getchar): e
You entered (using getchar): n
You entered (using getchar): d
You entered (using getchar): r
You entered (using getchar): e

Enter a line of text (using fgets): Vidyadhar Bendre
You entered (using fgets): Vidyadhar Bendre
*/