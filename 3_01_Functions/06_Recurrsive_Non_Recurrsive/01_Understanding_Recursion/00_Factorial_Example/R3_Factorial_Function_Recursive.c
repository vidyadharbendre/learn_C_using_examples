#include <stdio.h>

/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    11 December 2023

    Purpose: 
    Calculate factorial using recursion
    
    Description:
    This program demonstrates the calculation of factorial using a recursive approach.
    The concept of recursion is utilized to calculate the factorial of a number entered
    by the user. 
    
    Recursion is a technique where a function calls itself, breaking down
    a problem into smaller sub-problems until reaching a base case, and then combines
    the results of each sub-problem to solve the larger problem.

    The program prompts the user to enter a number. The entered number is then used to
    calculate its factorial using a recursive function named calculateFactorial_Recursive.
    This function repeatedly calls itself, decrementing the number at each step until it
    reaches the base case where the number becomes 1.

    At each recursive call, the function multiplies the current number by the result of
    the factorial of the previous number. This process continues until it reaches the
    base case, at which point the function returns 1. The multiplication of each number
    in the sequence leads to the final factorial value of the entered number.

    The getInput function retrieves user input, and the main function orchestrates the
    factorial calculation and displays the result to the user.

    Recursive Function Explanation:
    In the given recursive factorial function calculateFactorial_Recursive, the fproduct
    variable is local to each invocation of the function. So, when the function is called
    recursively, a new instance of fproduct is created for each recursive call, initialized
    to 1 each time.

    Each time the function is called, it maintains its own copy of fproduct within its
    stack frame. When the function reaches the base case (fnum == 1) and starts returning,
    it returns the value of fproduct calculated within that particular invocation of the
    function.

    Therefore, the variable fproduct is re-initialized (set to 1) in each recursive call,
    and it accumulates the product during the process of unwinding the recursive calls,
    ultimately resulting in the final factorial value when the base case is reached and
    the recursive calls are resolved.
*/

// Function prototype for getting user input
int getInput();
int calculateFactorial_Recursive(int fnum);

int main() {
    int num;
    long factorial;

    // Call getInput function to retrieve user input
    num = getInput();

    // Display the entered number
    printf("The factorial of the entered number is %d\n", num);

    // Calculate factorial recursively
    factorial = calculateFactorial_Recursive(num);

    // Print the factorial
    printf("%ld\n", factorial);

    return 0;
}

// Function to get user input
int getInput() {
    int fnum;
    printf("Enter a number\n");
    scanf("%d", &fnum);
    return fnum; // Return the entered number
}

// Recursive function to calculate factorial
int calculateFactorial_Recursive(int fnum) {
    int fproduct = 1;

    // Base case: factorial of 1 is 1
    if (fnum == 1) {
        return 1;
    } else {
        // Recursive call to calculate factorial
        fproduct = fnum * calculateFactorial_Recursive(fnum - 1);
        return fproduct;
    }
}

// The output of the above program is:
/*
Enter a number
5
The factorial of the entered number is 5
120
*/
