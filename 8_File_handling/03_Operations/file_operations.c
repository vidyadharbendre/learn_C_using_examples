#include <stdio.h>

void readFile() {
    FILE *file;
    char ch;
    
    // Open file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return;
    }

    // Read file character by character
    printf("Reading file contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
}

void writeFile() {
    FILE *file;
    
    // Open file for writing
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return;
    }

    // Write data to the file
    fprintf(file, "This is a test message.\n");
    fprintf(file, "Writing data to the file.\n");
    
    fclose(file);
}

void appendToFile() {
    FILE *file;
    
    // Open file for appending
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Unable to open file for appending.\n");
        return;
    }

    // Append data to the file
    fprintf(file, "This is an appended line.\n");
    
    fclose(file);
}

void readWriteFile() {
    FILE *file;
    char ch;
    
    // Open file for reading and writing
    file = fopen("example.txt", "r+");
    if (file == NULL) {
        printf("Unable to open file for reading and writing.\n");
        return;
    }

    // Read and write data to the file
    printf("Reading and modifying file contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    // Move the cursor to the beginning and write new data
    fseek(file, 0, SEEK_SET);
    fprintf(file, "This line is written after reading the file.\n");
    
    fclose(file);
}

void binaryWriteFile() {
    FILE *file;
    int num = 123456;

    // Open file for binary writing
    file = fopen("binary_example.bin", "wb");
    if (file == NULL) {
        printf("Unable to open file for binary writing.\n");
        return;
    }

    // Write binary data
    fwrite(&num, sizeof(int), 1, file);
    
    fclose(file);
}

void binaryReadFile() {
    FILE *file;
    int num;

    // Open file for binary reading
    file = fopen("binary_example.bin", "rb");
    if (file == NULL) {
        printf("Unable to open file for binary reading.\n");
        return;
    }

    // Read binary data
    fread(&num, sizeof(int), 1, file);
    printf("Read binary data: %d\n", num);

    fclose(file);
}

int main() {
    // Demonstrating different file modes

    // 1. Write to a file
    writeFile();
    
    // 2. Read from a file
    readFile();

    // 3. Append to a file
    appendToFile();
    readFile();

    // 4. Read and write to a file
    readWriteFile();
    readFile();

    // 5. Binary write to a file
    binaryWriteFile();

    // 6. Binary read from a file
    binaryReadFile();
    
    return 0;
}

//The output of the above file
/*
Reading file contents:
This is a test message.
Writing data to the file.
Reading file contents:
This is a test message.
Writing data to the file.
This is an appended line.
Reading and modifying file contents:
This is a test message.
Writing data to the file.
This is an appended line.
Reading file contents:
This line is written after reading the file.
ile.
This is an appended line.
Read binary data: 123456
*/