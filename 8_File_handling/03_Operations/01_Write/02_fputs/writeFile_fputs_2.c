#include <stdio.h>

int main() {
    // Declare a FILE pointer
    FILE *ptrtoFile;
    
    // String to be read from the keyboard
    char inputString[80]; // Assume a maximum length of 100 characters

    // Open a file in write mode ('w')
    ptrtoFile = fopen("xyz.txt", "w");

    // Check if file opening is successful
    if (ptrtoFile == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Prompt user to enter a string
    printf("Enter a string: ");
    
    // Read a string from the keyboard
    scanf("%82[^\n]", inputString); // Reading up to 80 characters until a newline is encountered

    // Write the entire string to the file using fputs
    fputs(inputString, ptrtoFile);

    // Close the file
    fclose(ptrtoFile);

    return 0;
}
