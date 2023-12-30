#include <stdio.h>

int main() {
    // Declare a string
    char myString[] = "HELLO";

    // Print each character and its memory address
    printf("Address   Value\n");
    for (int i = 0; myString[i] != '\0'; ++i) {
        printf("%p   '%c'\n", (void *)&myString[i], myString[i]);
    }
    
    // Print the null terminator
    printf("%p   '%c' (null terminator)\n", (void *)&myString[5], myString[5]);

    return 0;
}

// The output of the above program
/*
Address   Value
0x16b5ea764   'H'
0x16b5ea765   'E'
0x16b5ea766   'L'
0x16b5ea767   'L'
0x16b5ea768   'O'
0x16b5ea769   '' (null terminator)
*/
