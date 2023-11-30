#include <stdio.h>

// Function declaration
double power(double base, int exponent);

int main() {
    double base = 2.0;
    int exponent = 3;
    double result;

    // Function call
    result = power(base, exponent);
    printf("%.2f raised to the power of %d is: %.2f\n", base, exponent, result);

    // Function call
    result = power(3.0, 3);
    printf("%.2f raised to the power of %d is: %.2f\n", 3.0, 3, result);

    return 0;
}

// Function definition
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// The output of the above program is

/*

2.00 raised to the power of 3 is: 8.00
3.00 raised to the power of 3 is: 27.00

*/