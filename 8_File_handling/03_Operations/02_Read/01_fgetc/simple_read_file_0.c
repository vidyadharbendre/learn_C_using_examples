#include <stdio.h>

/*
 * Purpose: 
 * This program demonstrates how to read and display the contents of a file 
 * character by character using C file handling functions.

 * Description:
 * 1. The program opens a file named "abc.txt" in read mode.
 * 2. It checks if the file was successfully opened. If not, an error message is displayed.
 * 3. The program uses `fgetc()` to read characters one at a time from the file.
 * 4. The characters are printed to the console using `putchar()`.
 * 5. A `do-while` loop is used to ensure all characters are read until the end of the file (EOF).
 * 6. Finally, the file is closed using `fclose()` to release resources.
 */

int main() {
    FILE *ptrtoFILE;
    char ch;

    // Open the file "abc.txt" in read mode
    ptrtoFILE = fopen("abc.txt", "r");

    // Check if the file was successfully opened
    if (ptrtoFILE == NULL) {
        printf("Error in opening file!");
        return 1;
    }

    // Read the first character before entering the loop
    ch = fgetc(ptrtoFILE);

    // Use do-while to read and print the rest of the characters
    do {
        putchar(ch);  // Print the character
        ch = fgetc(ptrtoFILE);  // Read the next character
    } while (ch != EOF);

    // Close the file
    fclose(ptrtoFILE);
    return 0;
}

// The output of the above program is shown as below
/*
Vidyadahr Bendre
*/