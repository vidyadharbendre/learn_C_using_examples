#include <stdio.h>

/*
 * Purpose:
 * This program demonstrates file operations in C: writing to a file using `fprintf`
 * and then reading it back using `fgetc` to display its contents character by character.

 * Description:
 * 1. Open a file in write mode and write data using `fprintf`.
 * 2. Close the file after writing.
 * 3. Reopen the file in read mode and read its contents character by character using `fgetc`.
 */

int main() {
    FILE *ptrtoFILE;
    char ch;

    // Step 1: Write to the file
    ptrtoFILE = fopen("example_1.txt", "w");
    if (ptrtoFILE == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(ptrtoFILE, "Hello, File! This is a test.\nWelcome to file operations in C.");
    fclose(ptrtoFILE);  // Close the file after writing

    // Step 2: Read from the file
    ptrtoFILE = fopen("example_1.txt", "r");
    if (ptrtoFILE == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading contents from the file:\n");
    while ((ch = fgetc(ptrtoFILE)) != EOF) {  // Read character by character
        putchar(ch);  // Print each character to the console
    }

    fclose(ptrtoFILE);  // Close the file after reading

    return 0;
}

// The output of the above program is shown as below
/*
Reading contents from the file:
Hello, File! This is a test.
Welcome to file operations in C.% 
*/