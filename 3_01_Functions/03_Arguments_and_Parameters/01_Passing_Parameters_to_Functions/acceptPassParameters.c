#include <stdio.h>

// Function declaration
int add(int a, int b); // Function prototype

int main() {
    int num1, num2, result; // Declaring variables to hold user input and the result
    
    // Getting user input for the two numbers
    printf("Enter first number...: ");
    scanf("%d", &num1); // Accepting first number from user
    
    printf("Enter second number..: ");
    scanf("%d", &num2); // Accepting second number from user
    
    // Function call to add the entered numbers
    result = add(num1, num2);
    
    // Displaying the result
    printf("Result: %d\n", result);
    
    return 0;
}

// Function definition with a return statement
int add(int a, int b) {
    int c; // Variable to hold the result
    
    c = a + b; // Adding two numbers and storing the result in 'c'
    return c; // Returning the result back to the caller
}


// The output of the above program is

/*

Enter first number...: 45
Enter second number..: 90
Result: 135

*/
