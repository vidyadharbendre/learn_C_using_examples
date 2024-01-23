#include <stdio.h>

// Function to swap two variables using pointers
void swapTwoVariables(int *fvar1, int *fvar2);

// Function to display two variables
void displayTwoVariables(int a, int b);

int main() {
    int var1, var2;
    int *ptrtoIntVar1, *ptrtoIntVar2;

    // Get inputs from the keyboard
    printf("Enter the value of the first variable: ");
    scanf("%d", &var1);

    printf("Enter the value of the second variable: ");
    scanf("%d", &var2);

    // Display values before swapping
    printf("Before swapping variables\n");
    displayTwoVariables(var1, var2);

    // Assign addresses to pointers
    ptrtoIntVar1 = &var1;
    ptrtoIntVar2 = &var2;

    // Swapping variables by passing their addresses
    swapTwoVariables(ptrtoIntVar1, ptrtoIntVar2);

    // Display values after swapping
    printf("After swapping variables\n");
    displayTwoVariables(var1, var2);

    return 0;
}

// Function definition to swap two variables
void swapTwoVariables(int *fvar1, int *fvar2) {
    int temp = *fvar1;
    *fvar1 = *fvar2;
    *fvar2 = temp;
}

// Function definition to display two variables
void displayTwoVariables(int a, int b) {
    printf("The value of the first variable %d and second %d\n", a, b);
}

// The output of the above program is shown as below
/*
Enter the value of the first variable: 64
Enter the value of the second variable: 42
Before swapping variables
The value of the first variable 64 and second 42
After swapping variables
The value of the first variable 42 and second 64
*/