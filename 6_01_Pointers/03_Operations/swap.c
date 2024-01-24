#include <stdio.h>

void swapNumbers(int *num1, int *num2);


int main() {
    // Input two numbers
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to swap numbers using pointers
    swapNumbers(&num1, &num2);

    // Print the swapped numbers
    printf("Swapped numbers: %d and %d\n", num1, num2);

    return 0;
}

// Function to swap two numbers using pointers
void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}