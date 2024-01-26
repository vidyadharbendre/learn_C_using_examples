#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a FILE pointer to represent the file
    FILE *ptrtoFile;

    // Assign a constant string to be written to the file
    const char *inputString = "Hello, World!";

    // Open the file "xyz.txt" in write mode
    ptrtoFile = fopen("xyz.txt", "w");

    // Check if the file could be opened successfully
    if (ptrtoFile == NULL) {
        printf("File could not be opened.\n");
        return 1; // Exit with an error code
    }

    // Write the string to the file using fputs
    fputs(inputString, ptrtoFile);

    // Close the file
    fclose(ptrtoFile);

    return 0; // Exit successfully
}
