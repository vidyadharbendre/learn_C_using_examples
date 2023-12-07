#include <stdio.h>

int gcd(int a, int b);
void swap(int a, int b); // Function prototype for swap

int num1, num2; // Global variables for numbers

int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("GCD is not defined for negative numbers.\n");
    } else {
        int result = gcd(num1, num2);
        printf("GCD: %d\n", result);
    }

    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        if (a < b)
            swap(num1, num2); // Pass num1 and num2 directly to swap
        return gcd(a, a % b);
    }
}

void swap(int a, int b) {
    int temp = a; // Use the local variables for swapping
    a = b;
    b = temp;

    num1 = a; // Assign the swapped values back to global variables
    num2 = b;
}
