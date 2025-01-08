#include <stdio.h>

/*

FILE *fopen(const char *filename, const char *mode);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int fprintf(FILE *stream, const char *format, ...);

*/

int main() {
    FILE *ptrtoFILE;
    ptrtoFILE = fopen("example_1.txt", "w");
    if (ptrtoFILE == NULL) {
        printf("Error opening file");
        return 1;
    }

    // Writing using fwrite
    // const char data[] = "Hello, File!";
    // fwrite(data, sizeof(char), sizeof(data), ptrtoFILE);

    // Alternatively, writing using fprintf
    fprintf(ptrtoFILE, "Hello, File!");

    fclose(ptrtoFILE);

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
Escape q! 
*/