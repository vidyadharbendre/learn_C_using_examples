#include <stdio.h>

int main() {
    char character;

    // Step 1: Declare a character variable
    char *ptr;  // Step 2: Declare a pointer to character

    // Step 3: Assign the address of the character variable to the character pointer
    ptr = &character;

    // Accept a character from the user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Access and display the value using the pointer
    printf("\nCharacter entered: %c\n", *ptr);

    return 0;
}

// The putput of the above program is shown as below
/*
Enter a character: C

Character entered: C
*/