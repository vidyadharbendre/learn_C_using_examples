/*
Purpose:
Generate and display the Fibonacci series using both iterative and recursive methods.

Description:
This program demonstrates two different approaches to generate the Fibonacci series:
1. Iterative method using a function (`fibonacciFunction`) to generate the series up to a specified number of terms.
2. Recursive method using a function (`fibonacciRecursive`) to calculate Fibonacci numbers up to a specified term.

Explanation:
- The main function to accept total count/length of terms to generate the Fibonacci series.
- It calls the `fibonacciFunction` and `fibonacciRecursive` functions to display the generated series.
- `fibonacciFunction` generates the series iteratively by calculating each term based on the previous two terms, using a loop to print the series.
- `fibonacciRecursive` generates the series recursively, adhering to the Fibonacci sequence formula, and prints the numbers using a loop in the main function.
- The program demonstrates both methods by displaying the generated series for different counts of terms.

Functionality:
- `fibonacciFunction()`: Generates Fibonacci series using iteration.
- `fibonacciRecursive()`: Generates Fibonacci series using recursion.

Expected Output:
The program displays the generated Fibonacci series using both iterative and recursive approaches, showcasing the series for a specified number of terms and providing comparison between the two methods.
*/

/*
Purpose:
Generate and display the Fibonacci series up to a specified total length using both iterative and recursive methods.

Description:
This program demonstrates two different approaches to generate the Fibonacci series:
1. Iterative method using a function (`fibonacciFunction`) to generate the series up to a specified total length of elements.
2. Recursive method using a function (`fibonacciRecursive`) to calculate Fibonacci numbers up to a specified total length of elements.

Explanation:
- The main function takes user input for the total length of the Fibonacci series.
- It calls the `fibonacciFunction` and `fibonacciRecursive` functions to display the generated series.
- `fibonacciFunction` generates the series iteratively by calculating each term based on the previous two terms, using a loop to print the series up to the specified total length.
- `fibonacciRecursive` generates the series recursively, adhering to the Fibonacci sequence formula, and prints the numbers using a loop in the main function up to the specified total length.
- The program demonstrates both methods by displaying the generated series for the input total length of elements.

Functionality:
- `fibonacciFunction()`: Generates Fibonacci series using iteration up to a specified total length of elements.
- `fibonacciRecursive()`: Generates Fibonacci series using recursion up to a specified total length of elements.

Expected Output:
The program prompts the user to enter the total length of the Fibonacci series and displays the generated series using both iterative and recursive approaches, showcasing the series up to the specified total length and providing comparison between the two methods.
*/

#include <stdio.h>

// Function prototypes
void fibonacciIterative(int totalLength);
void fibonacciRecursive(int totalLength);

int main() {
    int totalLength;

    printf("Enter the total length of the Fibonacci series: ");
    scanf("%d", &totalLength); // Get user input for the total length

    // Generate Fibonacci series using iteration
    printf("Fibonacci Series using iteration: ");
    fibonacciIterative(totalLength);
    printf("\n");

    // Generate Fibonacci series using recursion
    printf("Fibonacci Series using recursion: ");
    fibonacciRecursive(totalLength);
    printf("\n");

    return 0;
}

// Function to generate Fibonacci series using iteration up to a specified total length of elements
void fibonacciIterative(int totalLength) {
    int first = 0, second = 1, next, i = 0;
    while (i < totalLength) {
        if (i <= 1) {
            next = i; // Set next as i (for first two terms: 0, 1)
        } else {
            next = first + second; // Calculate next term based on previous two terms
            first = second; // Update first term
            second = next; // Update second term
        }
        printf("%d, ", next); // Print the generated Fibonacci number
        i++;
    }
}

// Function to generate Fibonacci series using recursion up to a specified total length of elements
void fibonacciRecursive(int totalLength) {
    static int first = 0, second = 1, next;
    if (totalLength > 0) {
        if (totalLength == 1) {
            printf("%d, ", first); // Print the generated Fibonacci number
            return;
        }
        printf("%d, ", first); // Print the generated Fibonacci number
        next = first + second; // Calculate next term based on previous two terms
        first = second; // Update first term
        second = next; // Update second term
        fibonacciRecursive(totalLength - 1);
    }
}

// The output of the above program is shown below:
/* . 
Enter the total length of the Fibonacci series: 15
Fibonacci Series using iteration: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 
Fibonacci Series using recursion: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 
*/