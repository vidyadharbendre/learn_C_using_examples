/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    11 December 2023
    
    Approach:
    - Base Case Identification:
        - Approach: Identify the simplest form of the problem that doesn't require further recursion.
        - Description: Recognizing a condition that doesn't need additional recursive calls, ensuring a termination condition to prevent infinite recursion.
        - Purpose: Establish an exit point to stop recursive function calls.
        - Explanation: Specifically determine the scenario where the function returns a value without needing further recursive processing.

    Description:
    - Base Case Breakdown for Sum of First n Natural Numbers:
        - Approach: The base case arises when the value 'n' becomes 0.
        - Description: Clarify that when 'n' reaches 0, it signifies the simplest instance of the problem, resulting in the sum of the first 0 natural numbers being 0.
        - Purpose: Establish a definitive endpoint for the recursion when 'n' reaches its minimum value.
        - Explanation: Clearly define the situation where the function stops recursive processing by reaching the smallest form of the problem.

    - Recursive Case Breakdown:
        - Approach: The recursive case involves calling the function with a smaller or simpler version of the original problem.
        - Description: Describe the recursive process where the function calls itself with a reduced value ('n-1') until it reaches the base case.
        - Purpose: Enable step-by-step resolution of the problem by breaking it into smaller instances.
        - Explanation: Explain how the function gradually converges towards the base case by repeatedly addressing simpler versions of the problem until termination.
*/

#include <stdio.h>

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

/*
  Recursive Functions README

  Understanding Base Case and Recursive Case

  Base Case:

  The base case is the termination condition that halts the recursive calls within a function. It signifies the simplest scenario where the function returns a value without further recursive calls. 
  The primary purpose of the base case is to prevent infinite recursion and to establish an exit condition for the recursive function.

  - Identify the simplest form of the problem that doesn't need further recursion.

  Breakdown for Sum of First n Natural Numbers:

  - The base case for this problem occurs when n becomes 0.
    The sum of the first 0 natural numbers is 0.

  Recursive Case:

  The recursive case encompasses the actual recursive process. Within this part of the function, it calls itself with a smaller or simpler version of the original problem until it converges toward the base case. By breaking down the problem into smaller instances, the recursive case facilitates the gradual resolution of the problem at hand.

  - Describe how to break down the problem into smaller, simpler versions of the same problem.

  Breakdown for Recursive Case:

  - For any n > 0, the sum of the first n natural numbers is n plus the sum of the first n-1 natural numbers.

*/
