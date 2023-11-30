#include <stdio.h>

// Function declaration
multiply(int a, int b);

int main() {
    int num1 = 4, num2 = 6;

    // Function call
    multiply(num1, num2);
    // Function call
    multiply(10, 9999);
    // Function call
    multiply(67, 27);


    return 0;
}

// Function definition
multiply(int a, int b) {
    int result = a * b;
    printf("Multiplication of %7d and %7d is: %7d\n", a, b, result);
}

// The output of the above program is

/*

Multiplication of       4 and       6 is:      24
Multiplication of      10 and    9999 is:   99990
Multiplication of      67 and      27 is:    1809


*/