/*
    Name of the Program: Call by Value vs Call by Reference
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program demonstrates the difference between Call by Value 
    and Call by Reference in C programming. The program performs a swap operation 
    using both methods, showing how changes made in the function affect the original 
    variables depending on the method used.

    Call by Value:
        - Passes a copy of the variables to the function.
        - Changes made inside the function do not affect the original variables.
    
    Call by Reference:
        - Passes the memory addresses (pointers) of the variables to the function.
        - Changes made inside the function directly affect the original variables.

    Version History:
        Version 1.1 - [Date: 2024-11-29] - Modified to accept inputs from the keyboard.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

// Function demonstrating Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d (Swapped inside function only)\n", a, b);
}

// Function demonstrating Call by Reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d, b = %d (Swapped in original variables)\n", *a, *b);
}

int main() {
    int num1, num2;

    // Accepting input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Demonstrating Call by Value
    printf("\nBefore swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue: num1 = %d, num2 = %d (Original values remain unchanged)\n\n", num1, num2);

    // Demonstrating Call by Reference
    printf("Before swapByReference: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapByReference: num1 = %d, num2 = %d (Original values are swapped)\n", num1, num2);

    return 0;
}

/*
    Example Outputs:

    Case 1: Demonstrating Call by Value
    -----------------------------------
    Enter the first number: 10
    Enter the second number: 20

    Before swapByValue: num1 = 10, num2 = 20
    Inside swapByValue: a = 20, b = 10 (Values swapped inside function only)
    After swapByValue: num1 = 10, num2 = 20 (Original values remain unchanged)

    Case 2: Demonstrating Call by Reference
    ---------------------------------------
    Before swapByReference: num1 = 10, num2 = 20
    Inside swapByReference: a = 20, b = 10 (Values swapped in original variables)
    After swapByReference: num1 = 20, num2 = 10 (Original values are swapped)
*/
