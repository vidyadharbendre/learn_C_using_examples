#include <stdio.h>

int main() {
    // Declare a string
    char myString[] = "HELLO";

    // Print each character, its ASCII value, and memory address
    printf("Index   Value    ASCII Value\n");
    for (int i = 0; myString[i] != '\0'; ++i) {
        printf("%d       '%c'       %d\n", i, myString[i], myString[i]);
    }
    
    // Print the null terminator's ASCII value
    printf("5       '' (null terminator)   %d\n", myString[5]);

    return 0;
}

// The output of the above program is shown as below:
/* . 
Index   Value    ASCII Value
0       'H'       72
1       'E'       69
2       'L'       76
3       'L'       76
4       'O'       79
5       '' (null terminator)   0
*/