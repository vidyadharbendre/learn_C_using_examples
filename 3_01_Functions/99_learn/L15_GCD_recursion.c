#include <stdio.h>

int gcd(int a, int b);
void swap(); // Function prototype for swap

int num1, num2; // Global variables for numbers

int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("GCD is not defined for negative numbers.\n");
    } else {
        if (num1 < num2) {
            swap(); // If num1 is smaller, swap values
        }
        int result = gcd(num1, num2);
        printf("GCD: %d\n", result);
    }

    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b); // Use Euclidean algorithm
    }
}

void swap() {
    int temp = num1; // Use a temporary variable for swapping
    num1 = num2;
    num2 = temp;
}

// The output of the above program is:

/* 
Enter two numbers: 5 100
GCD: 5
*/

/* . 
Enter two numbers: 100 5
GCD: 5
*/
