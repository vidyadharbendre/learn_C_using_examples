#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a FILE pointer
    FILE *ptrtoFile=NULL;
    
    // Character to be read from the keyboard
    char ch;

    // Open a file in write mode ('w')
    ptrtoFile = fopen("xyz.txt", "w");

    // Check if file opening is successful
    if (ptrtoFile == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Prompt user to enter a character
    printf("Enter a character: ");
    
    // Read a character from the keyboard
    scanf(" %c", &ch);

    // Write the character to the file using fputc
    fputc(ch, ptrtoFile);

    // Close the file
    fclose(ptrtoFile);

    return 0;
}
