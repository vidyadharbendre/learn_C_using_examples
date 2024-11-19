/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 19, 2024

    Purpose:
    This program demonstrates two methods to swap two numbers:
    1. Using global variables and a function.
    2. Using the call by reference concept (passing pointers to a function).

    Description:
    The program allows the user to:
    - Swap numbers using global variables.
    - Swap numbers by passing the address of variables to a function.
    The results of both methods are displayed.

    Version History:
        Version 1.0 - [Date: 07-NOV-2024] - Demonstrated swapping using global variables and call by reference.
*/

#include <stdio.h>

// Global variables
int num1, num2;

// Function prototype for swapping using global variables
void swapGlobal();

// Function prototype for swapping using call by reference
void swapByReference(int *a, int *b);

int main() {
    // Input for global variables swapping
    printf("Enter two numbers for swapping using global variables: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping (Global Variables): num1 = %d, num2 = %d\n", num1, num2);
    
    // Call swapGlobal function
    swapGlobal();
    printf("After swapping (Global Variables): num1 = %d, num2 = %d\n", num1, num2);

    // Input for call by reference swapping
    int x, y;
    printf("\nEnter two numbers for swapping using call by reference: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping (Call by Reference): x = %d, y = %d\n", x, y);
    
    // Call swapByReference function
    swapByReference(&x, &y);
    printf("After swapping (Call by Reference): x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition to swap numbers using global variables
void swapGlobal() {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// Function definition to swap numbers using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


//The output of the above program is shown as below:
/*
Enter two numbers for swapping using global variables: 33 66
Before swapping (Global Variables): num1 = 33, num2 = 66
After swapping (Global Variables): num1 = 66, num2 = 33

Enter two numbers for swapping using call by reference: 11 88
Before swapping (Call by Reference): x = 11, y = 88
After swapping (Call by Reference): x = 88, y = 11
*/