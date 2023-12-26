#include <stdio.h>

// Function to calculate GCD using recursion - Declaration
int gcd(int a, int b);

// Main function
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd function and display the result
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
// Function to calculate GCD using recursion - Definition
int gcd(int a, int b) {
    int reminder;
    reminder = a % b; 
    // Base case
    if (reminder == 0) {
        return b;
    } else {
        // Recursive case
        return gcd(b, reminder);
    }
}

// The output of the above program is shown below:
/*
Enter two numbers: 62 8
GCD of 62 and 8 is 2
*/
