/*
    Name of the Program: File Extension Checker
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program checks the file extension of a given filename and 
    categorizes the file type based on its extension. It recognizes:
        - Text files: .txt
        - PDF files: .pdf
        - Image files: .png, .jpg
    If the extension is not recognized, it outputs "Unknown file type". If no 
    extension is found, it indicates that as well.

    Version History:
        Version 1.0 - [Date: 2024-10-29] - Initial version with a note for PythonTutor.com 
        for visualizing C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>
#include <string.h>

int main() {
    char filename[] = "document.pdf";
    char *extension = strrchr(filename, '.'); // Find the last occurrence of '.'

    if (extension != NULL) {
        extension++; // Move past the period to start comparing the extension itself

        // Determine file type based on the extension
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

// Compilation command: gcc fileType_Identification.c -o fileType_Identification
// Execution command: ./fileType_Identification

/* Example Outputs:

Case 1:
PDF file

Case 2:
Enter filename: image.png
Image file

Case 3:
Enter filename: notes.txt
Text file

Case 4:
Enter filename: archive.zip
Unknown file type

Case 5:
Enter filename: file_without_extension
No file extension found
*/
