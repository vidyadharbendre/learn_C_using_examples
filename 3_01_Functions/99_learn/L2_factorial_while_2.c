#include <stdio.h>

int main() {
    int number, result = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= number) {
            result *= i;
            i++;
        }
        printf("Factorial of %d is: %d\n", number, result);
    }

    return 0;
}
