# File Operations in C

## Introduction

File operations are crucial in C programming for reading from and writing to files. This guide covers some of the essential file operations, such as opening, closing, reading, and writing files.

## `fopen`: Opening a File

The `fopen` function is used to open a file and returns a file pointer that can be used for subsequent file operations.

```c
FILE *fopen(const char *filename, const char *mode);

```

## Example
```c
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a file named "example.txt" in write mode
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Perform operations on the file

    // Close the file
    fclose(filePointer);

    return 0;
}

```

## fclose: Closing a File
The fclose function is used to close an opened file.

```c
int fclose(FILE *stream);

```

## Example
```c
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a file named "example.txt"
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Perform operations on the file

    // Close the file
    fclose(filePointer);

    return 0;
}
```

## fprintf: Writing to a File
The fprintf function is used to write formatted data to a file.

```c
int fprintf(FILE *stream, const char *format, ...);

```
## Example
```c
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a file named "example.txt" in write mode
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Write data to the file
    fprintf(filePointer, "This is a sample text.");

    // Close the file
    fclose(filePointer);

    return 0;
}

```

## fscanf: Reading from a File
The fscanf function is used to read formatted data from a file.
```c
int fscanf(FILE *stream, const char *format, ...);

```
## Example
```c
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a file named "example.txt" in read mode
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Read data from the file
    int value;
    fscanf(filePointer, "%d", &value);

    // Perform operations with the read data

    // Close the file
    fclose(filePointer);

    return 0;
}

```

## feof: End-of-File Indicator

The feof function is used to check whether the end-of-file indicator for a file stream has been set.

```c
int feof(FILE *stream);

```
## Example
```c
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a file named "example.txt" in read mode
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Check if the end-of-file indicator is set
    if (feof(filePointer)) {
        printf("End of file reached.\n");
    } else {
        printf("End of file not reached.\n");
    }

    // Close the file
    fclose(filePointer);

    return 0;
}

```