/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    11 December 2023

    Purpose:
    Calculate the sum of digits of a number using recursion.

    Description:
    This program calculates the sum of the digits of a given number using recursion.
    Recursion is used to repeatedly isolate the last digit of the number and add it to 
    the sum of the digits of the remaining number (after removing the last digit), until
    the number becomes 0, which is the base case.

    Steps to Implement Recursive Sum of Digits:
    1. **Define the Base Case**:
        - When the number becomes 0, the sum is 0.
    2. **Define the Recursive Case**:
        - Isolate the last digit (`number % 10`) and add it to the sum of the remaining digits (`number / 10`).
    3. **Recursive Unwinding**:
        - As recursion unwinds, each digit is added to the sum until the original number is fully processed.
*/

#include <stdio.h>

// Function prototype to calculate sum of digits using recursion
int sumOfDigits(int number);

// Main function
int main() {
    int number; // Variable to store user input

    // Step 1: Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Step 2: Calculate the sum of digits using recursion
    int result = sumOfDigits(number);

    // Step 3: Display the result
    printf("The sum of the digits of %d is %d\n", number, result);

    return 0;
}

// Recursive function to calculate sum of digits
int sumOfDigits(int number) {
    // Step 4: Define the base case
    if (number == 0) {
        return 0; // When number becomes 0, return 0
    } else {
        // Step 5: Recursive case
        // Add the last digit to the result of sumOfDigits of the remaining number
        return (number % 10) + sumOfDigits(number / 10);
    }
}

/*
Example Output:
Enter a number: 1234
The sum of the digits of 1234 is 10

Enter a number: 987
The sum of the digits of 

Enter a number: 452
The sum of the digits of 452 is 11
*/
