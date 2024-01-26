#include <stdio.h>

/*
The fopen function is used to open a file. It returns a file pointer that can be used for further file operations.

FILE *fopen(const char *filename, const char *mode);

*/

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // File operations...

    fclose(file);

    return 0;
}
