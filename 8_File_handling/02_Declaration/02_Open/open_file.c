#include <stdio.h>

/*
 * Purpose:
 * This program demonstrates how to open a file using the `fopen` function in C, 
 * and handle errors that may occur during the file opening process.

 * Description:
 * 1. The program uses the `fopen` function to open a file named "example.txt" in write mode ("w").
 * 2. If the file cannot be opened, an error message is displayed, and the program exits.
 * 3. Once the file is successfully opened, it can be used for file operations such as writing data.
 * 4. The file is closed using the `fclose` function to release system resources.
 * 
 * Notes:
 * - `fopen` is used to open a file and returns a file pointer of type `FILE*`.
 * - If `fopen` fails (e.g., due to insufficient permissions or the file system being read-only), 
 *   it returns `NULL`, and error handling should be implemented.
 * - In write mode ("w"), if the file exists, its contents are truncated. If the file does not exist, 
 *   it is created.
 */

int main() {
    FILE *ptrtoFILE;

    // Attempt to open the file in write mode
    ptrtoFILE = fopen("example.txt", "w");
    if (ptrtoFILE == NULL) {
        printf("Error opening file");  // Print error message
        return 1;  // Exit with error code
    }

    // File operations (e.g., writing to the file) go here...

    // Close the file
    fclose(ptrtoFILE);

    return 0;
}
