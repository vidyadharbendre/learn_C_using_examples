#include <stdio.h>

int main() {
    // Declare a FILE pointer
    FILE *ptrtoFile=NULL;
    
    // String to be read from the keyboard
    char inputString[100]; // Assume a maximum length of 100 characters

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
    scanf("%80[^\n]", inputString); // Reading up to 80 characters until a newline is encountered

    // Write each character to the file using fputc in a loop
    for (int i = 0; inputString[i] != '\0'; i++) {
        fputc(inputString[i], ptrtoFile);
    }

    // Close the file
    fclose(ptrtoFile);

    return 0;
}
