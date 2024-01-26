#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a file pointer
    FILE *ptrtoFILE;

    // Declare a variable to store characters read from the file
    char ch;

    // Open the file "abc.txt" in read mode
    ptrtoFILE = fopen("abc.txt", "r");

    // Check if the file is successfully opened
    if (ptrtoFILE == NULL) {
        printf("Error in opening!");  // Print an error message
        exit(1);  // Exit the program with an error code
    } else {
        // Read characters from the file until the end-of-file is reached
        while (!feof(ptrtoFILE)) {
            // Read a character from the file
            ch = fgetc(ptrtoFILE);

            // Print the character
            printf("%c", ch);
        }

        // Close the file
        fclose(ptrtoFILE);
    }

    return 0;
}

// The output of the above program is shown as below
/*
Bendre Vidyadhar
*/