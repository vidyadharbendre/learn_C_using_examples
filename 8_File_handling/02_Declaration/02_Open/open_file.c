#include <stdio.h>

/*
The fopen function is used to open a file. It returns a file pointer that can be used for further file operations.

FILE *fopen(const char *filename, const char *mode);

*/

int main() {
    FILE *ptrtoFILE;
    ptrtoFILE = fopen("example.txt", "w");
    if (ptrtoFILE == NULL) {
        printf("Error opening file");
        return 1;
    }

    // File operations...

    fclose(ptrtoFILE);

    return 0;
}
