/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
24 November, 2023

Purpose:
The purpose of this C program is to demonstrate the functionality of a simple addition operation using functions. It prompts the user to enter two numbers, performs the addition using a separate function, and then displays the result.

Description:
User Input:

The program prompts the user to enter two integers.
It reads these integers as input.
Addition Function:

There's a function add() declared and defined to perform addition.
It takes two integers as parameters and returns their sum.
Function Call:

The entered numbers are passed as arguments to the add() function.
The returned result (sum) is stored in a variable.
Output Display:

The program prints the entered numbers and the calculated sum.
Explanation:
Variable Declaration:

num1, num2, and result are declared to store user input and the calculation result.
User Input:

scanf() function is used to accept two integers from the user.
Function Definition (add()):

add() function takes two integers as parameters and returns their sum.
It internally computes the sum of the two numbers passed to it and returns the result.
Function Call:

add(num1, num2) is used to call the add() function with the entered numbers.
The returned sum is stored in the result variable.
Output Display:

The program uses printf() to display the entered numbers and the computed sum in a formatted manner.

*/




#include <stdio.h>

// Function declaration
int add(int a, int b); // Function prototype for addition

int main() {
    int num1, num2, result; // Variables to hold user input and the result
    
    // Getting user input for the two numbers
    printf("Enter the first number...: ");
    scanf("%d", &num1); // Accepting the first number from the user
    
    printf("Enter the second number..: ");
    scanf("%d", &num2); // Accepting the second number from the user
    
    // Function call to add the entered numbers
    result = add(num1, num2);
    
    // Displaying the result
    printf("The sum of the entered numbers is %d + %d = %d\n", num1, num2, result);
    
    return 0;
}

// Function definition for addition with a return statement
int add(int a, int b) {
    int sum; // Variable to hold the result of addition
    
    sum = a + b; // Adding two numbers and storing the result in 'sum'
    return sum; // Returning the result back to the caller
}

// The output of the above program will be:

/*

Enter the first number...: 66
Enter the second number..: 33
The sum of the entered numbers is 66 + 33 = 99

*/
