/* 
    Program Name: simpleCalculator.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: This program implements a simple calculator that accepts two numbers 
                 and an operator (+, -, *, /) from the user, then performs the corresponding 
                 arithmetic operation (addition, subtraction, multiplication, division).

    Version History
    Version 1.0 - [Date: 2024-15-10] - Added a note about PythonTutor.com to write and visualize C programs on mobile.
  
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    // Declare two integer variables 'num1' and 'num2' to store user input.
    float num1, num2;
    
    // Declare a char variable 'operator' to store the arithmetic operator.
    char operator;

    // Declare a float variable 'result' to store the result of the operation.
    float result;

    // Ask the user to enter the first number.
    printf("Enter the first number: ");
    // Read the user input and store it in 'num1'.
    scanf("%f", &num1);

    // Ask the user to enter the operator (+, -, *, /).
    printf("Enter the operator (+, -, *, /): ");
    // Read the user input and store it in 'operator'.
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline characters.

    // Ask the user to enter the second number.
    printf("Enter the second number: ");
    // Read the user input and store it in 'num2'.
    scanf("%f", &num2);

    // Use a switch statement to perform the corresponding operation based on the operator.
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            // Check if the denominator is zero to avoid division by zero.
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            // Handle invalid operator input.
            printf("Error: Invalid operator. Please use one of the following: +, -, *, /.\n");
    }

    // Return 0 to indicate successful program execution.
    return 0;
}

/*
Enter the first number: 4
Enter the operator (+, -, *, /): -
Enter the second number: 4
Result: 4.00 - 4.00 = 0.00
*/
