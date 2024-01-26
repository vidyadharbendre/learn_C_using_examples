#include <stdio.h>

int main() {
    // Declare a FILE pointer
    FILE *ptrtoFile;
    
    // Character to be written to the file
    char ch = 'V';

    // Open a file in write mode ('w')
    ptrtoFile = fopen("xyz.txt", "w");

    // Write a character to the file using fputc
    fputc(ch, ptrtoFile);

    // Close the file
    fclose(ptrtoFile);

    return 0;
}
