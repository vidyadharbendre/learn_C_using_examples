/* 
    Program Name: addTwoaccept.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: This program calculates the sum of two integer numbers entered by the user 
                 and prints the result. The 'sum' variable holds the result of their addition.
                 The program outputs the sum using formatted printf statements.

    Version History
    Version 1.0 - [Date: 2024-15-10] - Added a note about PythonTutor.com to write and visualize C programs on mobile.
  
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    // Declare two integer variables 'num1' and 'num2' to store user input.
    int num1, num2;

    // Declare an integer variable 'sum' to store the result of the addition.
    int sum;

    // Ask the user to enter the first number.
    printf("Enter the first number....: ");
    // Read the user input and store it in 'num1'.
    scanf("%d", &num1);

    // Ask the user to enter the second number.
    printf("Enter the second number...: ");
    // Read the user input and store it in 'num2'.
    scanf("%d", &num2);

    // Perform the addition of 'num1' and 'num2', and store the result in 'sum'.
    sum = num1 + num2;

    // Output the sum of 'num1' and 'num2' using the printf function.
    printf("The sum of the two numbers is %d\n", sum);

    // Output the formatted equation of 'num1 + num2 = sum'.
    printf("%d + %d = %d\n", num1, num2, sum);

    // Return 0 to indicate successful program execution.
    return 0;
}
/*
Enter the first number....: 44
Enter the second number...: 56
The sum of the two numbers is 100
44 + 56 = 100
*/
