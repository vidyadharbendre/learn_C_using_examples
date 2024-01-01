#include <stdio.h>

void displayCharArray(char myString[], int size);

int main() {
    // Declare a string with explicit size (5 characters) to accommodate the null terminator
    char myString[5] = "HELLO"; // Including space for 5 characters; null terminator automatically added

    // Display the characters and their addresses using the function
    displayCharArray(myString, 5);

    return 0;
}
void displayCharArray(char myString[], int size) {
    // Print each character and its memory address
    printf("Index   Address   Value\n");
    for (int i = 0; i < size; ++i) {
        printf("%d       %p   '%c'\n", i, &myString[i], myString[i]);
    }
}

// The output of the above program is shown below:
/* . 
Index   Address   Value
0       0x16f456734   'H'
1       0x16f456735   'E'
2       0x16f456736   'L'
3       0x16f456737   'L'
4       0x16f456738   'O'
*/