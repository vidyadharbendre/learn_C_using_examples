# C Program: Arithmetic Expressions

## Purpose

This program allows users to enter three integer operands and calculates the results of two different arithmetic expressions, illustrating the use of basic arithmetic operators in C.

## Description

- The program prompts the user to enter three integer operands, separated by spaces.
- It uses the `scanf` function to read and store the values of these operands in the variables `op1`, `op2`, and `op3`.

### Arithmetic Expressions

1. `result_1 = op1 + op2 * op3`
   - This expression performs the multiplication of `op2` and `op3`, then adds the result to `op1`. The calculation demonstrates the operator precedence and the use of `*` for multiplication.
   - The calculated value is stored in the variable `result_1`.

2. `result_2 = op1 + op2 % op3`
   - This expression calculates the remainder when `op2` is divided by `op3`, then adds the result to `op1`. The calculation demonstrates the use of the `%` operator for modulus.
   - The calculated value is stored in the variable `result_2`.

- Finally, the program displays the results of both expressions with informative messages using the `printf` function.

## Running the Program

1. Ensure you have a C compiler installed (e.g., GCC).
2. Save the program to a file with a .c extension (e.g., ArithmeticExpressions.c).
3. Compile the program using the following command:

    ```bash
    gcc preceedenceCheck.c -o preceedenceCheck
4. Run the compiled program
    ```bash
    ./preceedenceCheck
