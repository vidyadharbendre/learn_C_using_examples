#include <stdio.h>

/*

FILE *fopen(const char *filename, const char *mode);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int fprintf(FILE *stream, const char *format, ...);

*/

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Writing using fwrite
    const char data[] = "Hello, File!";
    fwrite(data, sizeof(char), sizeof(data), file);

    // Alternatively, writing using fprintf
    // fprintf(file, "Hello, File!");

    fclose(file);

    return 0;
}

//Compile it using the following command
/*
gcc read_file.c -o read_file
*/
//Execute it
/*
./read_file
*/

//open the file using the command
/*
vi example.txt
*/

// quit using
/*
Escate q! 
*/