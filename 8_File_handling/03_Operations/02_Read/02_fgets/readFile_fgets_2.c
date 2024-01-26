#include <stdio.h>
#include <stdlib.h>

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
        while (fgets(str, 80, ptrtoFILE) != NULL) {
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