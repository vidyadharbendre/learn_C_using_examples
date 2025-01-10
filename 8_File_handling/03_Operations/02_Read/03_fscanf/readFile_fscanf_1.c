#include <stdio.h>
#include <stdlib.h>

/*
 * Purpose:
 * This program demonstrates how to read and display the content of a file 
 * using the `fscanf` function for formatted input in C.

 * Description:
 * 1. The program opens a file named "abc.txt" in read mode.
 * 2. It checks if the file was successfully opened. If not, it displays an error message and exits.
 * 3. The program uses `fscanf()` to read strings from the file.
 * 4. Each word (separated by whitespace) is printed to the console until the end of the file (EOF) is reached.
 * 5. Finally, the file is closed using `fclose()` to release resources.
 */

int main() {
    // Declare a file pointer
    FILE *ptrtoFILE;

    // Declare a character array to store the read word
    char word[80];

    // Open the file "abc.txt" in read mode
    ptrtoFILE = fopen("abc.txt", "r");

    // Check if the file is successfully opened
    if (ptrtoFILE == NULL) {
        printf("Error in opening!");  // Print an error message
        exit(1);  // Exit the program with an error code
    } else {
        // Read words from the file until the end-of-file is reached
        while (fscanf(ptrtoFILE, "%s", word) != EOF) {
            // Print the word
            printf("%s\n", word);
        }

        // Close the file
        fclose(ptrtoFILE);
    }

    return 0;
}
