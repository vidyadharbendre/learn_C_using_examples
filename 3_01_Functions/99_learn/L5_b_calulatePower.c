#include <stdio.h>

int calculatePower(int base, int exponent);

int main() {
    int base, exponent, result;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Exponent should be non-negative.\n");
    } else {
        result = calculatePower(base, exponent);
        printf("Result: %d\n", result);
    }

    return 0;
}

int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// The output of the above program is:
/*  
Enter the base: 3
Enter the exponent: 2
Result: 9
*/