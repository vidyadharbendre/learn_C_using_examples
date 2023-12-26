#include <stdio.h>

// Function to calculate power using recursion - Declaration
int power(int base, int exponent);

// Main function
int main() {
    int base, exponent;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Call the power function and display the result - Call
    int result = power(base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}

// Function to calculate power using recursion - Definition
int power(int base, int exponent) {
    // Base case
    if (exponent == 0) {
        return 1;
    } else {
        // Recursive case
        return base * power(base, exponent - 1);
    }
}
// The output of the above program is shown below:
/*  
Enter base number: 6
Enter exponent: 3
6 raised to the power of 3 is 216
(base) vidyadharbendre@Vidyadhars-MacBook-Pro 03_Power_Exponent % ./Exponent_Power
Enter base number: 2
Enter exponent: 4
2 raised to the power of 4 is 16
*/