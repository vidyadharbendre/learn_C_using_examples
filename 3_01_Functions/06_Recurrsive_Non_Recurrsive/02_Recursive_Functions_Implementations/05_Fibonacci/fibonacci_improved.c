#include <stdio.h>
// function declaration
int fibonacci(int n);

// Main function
int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

//  function call
    printf("Fibonacci series up to %d terms: ", terms);
    for (int i = 0; i < terms; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

// Function to calculate Fibonacci series using recursion - Defintion
int fibonacci(int n) {
    // Base case
    if (n <= 1) {
        return n;
    } else {
        // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// The output of the above program is shown as below:
/* .  
Enter the number of terms for Fibonacci series: 11
Fibonacci series up to 11 terms: 0 1 1 2 3 5 8 13 21 34 55
*/