#include <stdio.h>

int main() {
    FILE *ptrtoFILE;
    char ch;

    ptrtoFILE = fopen("abc.txt", "r");

    if (ptrtoFILE == NULL) {
        printf("Error in opening file!");
        return 1;
    }

    // Read the first character before entering the loop
    ch = fgetc(ptrtoFILE);

    // Use do-while to read and print the rest of the characters
    do {
        putchar(ch);  // Prints the character
        ch = fgetc(ptrtoFILE);  // Read the next character
    } while (ch != EOF);

    fclose(ptrtoFILE);
    return 0;
}
