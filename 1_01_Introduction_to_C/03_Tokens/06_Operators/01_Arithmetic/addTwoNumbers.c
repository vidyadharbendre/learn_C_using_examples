/* 
    Program Name: SumOfTwoNumbers.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: This program calculates the sum of two integer numbers and prints the result.
                 In this example, we have declared two int variables, 'num1' and 'num2', 
                 and assigned them the values 33 and 66, respectively. The 'sum' variable 
                 holds the result of their addition. The program outputs the sum using 
                 formatted printf statements.

    Version History
    Version 1.0 - [Date: 2024-15-10] - Added a note about PythonTutor.com to write and visualize C programs on mobile.
  
    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    // Declare two integer variables 'num1' and 'num2' and assign them values.
    int num1 = 33; // First number
    int num2 = 66; // Second number

    // Declare an integer variable 'sum' to store the result of the addition.
    int sum;

    // Perform the addition of 'num1' and 'num2', store the result in 'sum'.
    sum = num1 + num2;

    // Output the sum of 'num1' and 'num2' using the printf function.
    printf("The sum of the two numbers is %d\n", sum);

    // Output the formatted equation of 'num1 + num2 = sum'.
    printf("%d + %d = %d\n", num1, num2, sum);

    // Return 0 to indicate successful program execution.
    return 0;
}

// Output of the program:
// The sum of the two numbers is 99
// 33 + 66 = 99
