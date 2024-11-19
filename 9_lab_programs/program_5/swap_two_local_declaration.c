/* 
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Date: November 19, 2024
    Purpose: To demonstrate swapping two numbers using local variables.
*/

#include <stdio.h>

// Function to swap using local variables
void swapUsingLocals(int a, int b) {
    int temp;   // Temporary variable for swapping
    temp = a;   // Store the value of a
    a = b;      // Assign the value of b to a
    b = temp;   // Assign the value of temp (original a) to b

    // Display the swapped values inside the function
    printf("Inside swapUsingLocals: num1 = %d, num2 = %d\n", a, b);
}

int main() {
    // Local variables
    int num1 = 10, num2 = 20;

    printf("Before swapping in main: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swapUsingLocals(num1, num2);

    // Values after calling swapUsingLocals
    printf("After swapping in main: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// The output of the above program is shown as below:
/*
Before swapping in main: num1 = 10, num2 = 20
Inside swapUsingLocals: num1 = 20, num2 = 10
After swapping in main: num1 = 10, num2 = 20
*/