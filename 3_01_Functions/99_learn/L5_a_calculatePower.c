#include <stdio.h>

int main() {
    int base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Exponent should be non-negative.\n");
    } else {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        printf("Result: %d\n", result);
    }

    return 0;
}

// The output of the above program is

/*  
Enter the base: 2
Enter the exponent: 4
Result: 16
*/
