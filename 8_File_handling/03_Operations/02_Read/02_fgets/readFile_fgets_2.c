#include <stdio.h>
#include <stdlib.h>

/*
 * Purpose:
 * This program demonstrates how to read and display the content of a file 
 * line by line using C file handling functions.

 * Description:
 * 1. The program opens a file named "abc.txt" in read mode.
 * 2. It checks if the file was successfully opened. If not, it displays an error message and exits.
 * 3. The program uses `fgets()` to read strings (lines) from the file into a character array.
 * 4. Each line is printed to the console until the end of the file (EOF) is reached.
 * 5. Finally, the file is closed using `fclose()` to release resources.
 */

int main() {
    // Declare a file pointer
    FILE *ptrtoFILE;

    // Declare a character array to store the read string
    char str[80];

    // Open the file "abc.txt" in read mode
    ptrtoFILE = fopen("abc.txt", "r");

    // Check if the file is successfully opened
    if (ptrtoFILE == NULL) {
        printf("Error in opening!");  // Print an error message
        exit(1);  // Exit the program with an error code
    } else {
        // Read strings from the file until the end-of-file is reached
        while (fgets(str, sizeof(str), ptrtoFILE) != NULL) {
            // Print the string
            printf("%s", str);
        }

        // Close the file
        fclose(ptrtoFILE);
    }

    return 0;
}
// The output of the above program is shown as below
/*
Bendre Atharva
Akshara Bendre
Vidyadhar Bendre
*/