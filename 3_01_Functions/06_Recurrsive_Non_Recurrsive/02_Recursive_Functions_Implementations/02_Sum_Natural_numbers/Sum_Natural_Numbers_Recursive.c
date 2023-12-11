#include <stdio.h>

/*
    Overview
    This README provides an understanding of the base case and recursive case for a recursive function sum_natural_numbers.
    This function calculates the sum of all natural numbers up to a given input n.

    Base Case
    The base case occurs when n reaches 0. At this point, the function returns 0, serving as the termination condition where
    no further recursive calls are made. This halts the recursion and prevents an infinite loop of function calls.

    Recursive Case
    In the recursive case, the function sum_natural_numbers calls itself with a value smaller than the current n, specifically n - 1.
    It performs addition (n + ...) by adding the current value of n to the result of the function called on the smaller value.
    This process continues recursively until the base case (when n becomes 0) is reached. Each recursive call contributes to the summation
    of all natural numbers smaller than or equal to the initial n value.
*/

int sum_natural_numbers(int fn);

int main() {
    int num, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit if a negative number is entered
    }

    // Calculate the sum of natural numbers up to num
    sum = sum_natural_numbers(num);

    // Display the sum
    printf("Sum of natural numbers up to %d is %d.\n", num, sum);

    return 0;
}

// Recursive function to calculate the sum of natural numbers
int sum_natural_numbers(int fn) {
    // Base case
    if (fn == 0) {
        return 0; // Termination condition
    } else {
        // Recursive case: Add n to the sum of numbers from 1 to n-1
        return fn + sum_natural_numbers(fn - 1);
    }
}

// The output of the above program is
/*
Enter a positive integer: 5
Sum of natural numbers up to 5 is 15.
*/