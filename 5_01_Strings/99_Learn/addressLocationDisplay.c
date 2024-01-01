#include <stdio.h>

int main() {
    // Declare a string
    char myString[] = "HELLO";

    // Print each character and its memory address
    printf("Index   Address   Value\n");
    for (int i = 0; myString[i] != '\0'; ++i) {
        printf("%d       %p   '%c'\n", i, &myString[i], myString[i]);
    }
    
    // Print the null terminator
    printf("5       %p   '%c' (null terminator)\n", &myString[5], myString[5]);

    return 0;
}

// The output of the above program is shown as below:
/* . 
Index   Address   Value
0       0x16ae96704   'H'
1       0x16ae96705   'E'
2       0x16ae96706   'L'
3       0x16ae96707   'L'
4       0x16ae96708   'O'
5       0x16ae96709   '' (null terminator)
*/