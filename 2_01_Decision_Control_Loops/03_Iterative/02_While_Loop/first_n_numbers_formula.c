/*
    Name of the Program: Sum of First n Numbers (Using Formula and While Loop)
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: This program calculates the sum of the first n natural numbers
    using two methods:
        - Method 1: Using a mathematical formula: Sum = n * (n + 1) / 2
        - Method 2: Using a while loop to iterate and sum the numbers

    Version History:
        Version 1.0 - [Date: 2024-11-13] - Initial version with both methods implemented.

    Note1:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

    Note2:
    The formula method is more efficient for calculating the sum because it
    executes in constant time (O(1)). The while loop method, on the other hand,
    iterates through the numbers and has a time complexity of O(n).
    
    Both methods produce the same result, but the loop approach can be extended 
    to more complex operations if needed.

*/

#include <stdio.h>

int main() {
    int n;           // To store the number of terms
    int sum_formula; // To store the sum using formula
    int sum_loop = 0; // To store the sum using while loop
    int i = 1;       // Loop counter

    // Input from the user
    printf("Enter the value of n (to calculate the sum of first n natural numbers): ");
    scanf("%d", &n);

    // Method 1: Using the formula
    // Formula: Sum = n * (n + 1) / 2
    sum_formula = n * (n + 1) / 2;

    // Method 2: Using a while loop
    while (i <= n) {
        sum_loop += i;
        i++;
    }

    // Output the results
    printf("\nUsing Formula: The sum of the first %d natural numbers is %d.\n", n, sum_formula);
    printf("Using While Loop: The sum of the first %d natural numbers is %d.\n", n, sum_loop);

    return 0;
}

/*
    Compilation command: gcc sumOfNumbers.c -o sumOfNumbers
    Execution command: ./sumOfNumbers

    Example Outputs:

    Case 1:
    Enter the value of n (to calculate the sum of first n natural numbers): 5
    Using Formula: The sum of the first 5 natural numbers is 15.
    Using While Loop: The sum of the first 5 natural numbers is 15.

    Case 2:
    Enter the value of n (to calculate the sum of first n natural numbers): 10
    Using Formula: The sum of the first 10 natural numbers is 55.
    Using While Loop: The sum of the first 10 natural numbers is 55.

    Case 3:
    Enter the value of n (to calculate the sum of first n natural numbers): 100
    Using Formula: The sum of the first 100 natural numbers is 5050.
    Using While Loop: The sum of the first 100 natural numbers is 5050.
*/
