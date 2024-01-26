#include <stdio.h>

int main() {
    int a = 900;
    // Declare a FILE pointer to represent the file
    FILE *ptrtoFile=NULL;

    // Open the file "xyz.txt" in write mode
    ptrtoFile = fopen("xyz.txt", "w");

    // Check if the file could be opened successfully
    if (ptrtoFile == NULL) {
        printf("File could not be opened.\n");
        return 1; // Exit with an error code
    }

    // Write an integer (100) and a string ("Hello, World!") to the file using fprintf
    fprintf(ptrtoFile, "%d %d %s", 100, a, "Hello, World!");

    // Close the file
    fclose(ptrtoFile);

    return 0; // Exit successfully
}
