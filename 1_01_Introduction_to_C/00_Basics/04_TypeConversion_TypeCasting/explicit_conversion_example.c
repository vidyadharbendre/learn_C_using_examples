#include <stdio.h>

/*
    Program to demonstrate explicit type conversion in modulus division.
    
    Author: 
    Vidyadhar Bendre
    
    Date: 
    November 11, 2024
    
    Purpose:
    This program shows how to handle modulus division when operands are initially
    declared as floating-point numbers. It explicitly converts them to integers 
    using type casting to make the modulus operator work.

    Explanation:
    - Modulus (`%`) requires both operands to be integers.
    - When operands are `float` or `double`, explicit type conversion is needed.
    - The program takes two floating-point numbers as input, converts them to integers, 
      and then calculates and displays the modulus.

    Notes:
    - Type casting is performed using `(int)` to ensure compatibility with `%`.
*/

int main() {
    float num1, num2;  // Declare operands as floating-point numbers
    int int_num1, int_num2, result;  // Declare integer variables for modulus

    // Prompt the user to enter two floating-point numbers
    printf("Enter two floating-point numbers (dividend and divisor)...: ");
    scanf("%f %f", &num1, &num2);

    // Explicitly convert the floating-point numbers to integers
    int_num1 = (int)num1;
    int_num2 = (int)num2;

    // Perform modulus operation if divisor is not zero
    if (int_num2 != 0) {
        result = int_num1 % int_num2;
        printf("The modulus of %d and %d is................................: %d\n", int_num1, int_num2, result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Enter two floating-point numbers (dividend and divisor)...: 10.897 3.15
The modulus of 10 and 3 is................................: 1
*/