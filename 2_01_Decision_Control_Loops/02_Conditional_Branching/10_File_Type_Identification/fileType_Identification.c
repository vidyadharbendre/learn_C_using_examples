#include <stdio.h>
#include <string.h>

int main() {
    char filename[] = "document.pdf";
    char *extension = strrchr(filename, '.'); // Find the last occurrence of '.'

    if (extension != NULL) {
        extension++; // Move past the period to start comparing the extension itself

        switch (*extension) {
            case 't':
                if (strcmp(extension, "txt") == 0) {
                    printf("Text file\n");
                } else {
                    printf("Unknown file type\n");
                }
                break;
            case 'p':
                if (strcmp(extension, "pdf") == 0) {
                    printf("PDF file\n");
                } else if (strcmp(extension, "png") == 0 || strcmp(extension, "jpg") == 0) {
                    printf("Image file\n");
                } else {
                    printf("Unknown file type\n");
                }
                break;
            default:
                printf("Unknown file type\n");
                break;
        }
    } else {
        printf("No file extension found\n");
    }

    return 0;
}
// The output of the above program is shown below:
/* . 
PDF file
*/