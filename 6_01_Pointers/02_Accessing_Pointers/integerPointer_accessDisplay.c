#include <stdio.h>

int main() {
    int number;
    // Declare a pointer and assign the address of the variable 'number' to it
    int *ptr;
    ptr = &number;
    // Accept an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Access and display the value using the pointer
    printf("\nValue entered: %d\n", *ptr);

    return 0;
}
