/* 
    
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com
    
    Purpose: 
    This program performs arithmetic operations on three user-provided integer operands and calculates two results. It demonstrates the use of addition, multiplication, and modulo operators in C.

    Description:
    - The program prompts the user to enter three integer operands, op1, op2, and op3.
    - It calculates result_1 by multiplying op2 and op3, then adding op1.
    - It calculates result_2 by finding the remainder when op2 is divided by op3, then adding op1.
    - The program displays both results along with the corresponding operands.

    Arithmetic Operations Demonstrated:
    - Addition (+) for sum calculation.
    - Multiplication (*) for product calculation.
    - Modulo (%) for finding the remainder.

    Formulae:
    - result_1 = op1 + op2 * op3
    - result_2 = op1 + op2 % op3
*/


#include <stdio.h>

int main() {
    int op1, op2, op3;  // Declare variables to store the three operands
    int result_1, result_2;  // Declare variables to store the results of arithmetic expressions

    // Prompt the user to enter three operands
    printf("Enter 3 operands one by one with spaces: ");
    scanf("%d %d %d", &op1, &op2, &op3);  // Read and store the user-provided values

    // Calculate result_1 using op1, op2, and op3
    result_1 = op1 + op2 * op3;  // Arithmetic expression 1

    // Calculate result_2 using op1, op2, and op3
    result_2 = op1 + op2 % op3;  // Arithmetic expression 2

    // Display the results of the arithmetic expressions
    printf("The output of %d + %d * %d is: %d\n", op1, op2, op3, result_1);  // Display result_1
    printf("The output of %d + %d %% %d is: %d\n", op1, op2, op3, result_2);  // Display result_2





    return 0;  // Return 0 to indicate successful program execution
}

// The output of the program as shown below
/* .  

Enter 3 operands one by one with spaces: 6 16 3
The output of 6 + 16 * 3 is: 54
The output of 6 + 16 % 3 is: 7

*/