#include <stdio.h>

// Function to calculate factorial using a while loop
long long factorial(int num) {
    long long fact = 1;
    int i = num;
    while (i > 0) {
        fact *= i;
        i--; // Decrement the counter
    }
    return fact;
}

// Function to calculate nPr
long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Function to calculate nCr using nPr
long long nCr(int n, int r) {
    return nPr(n, r) / factorial(r);
}

int main() {
    int n, r;

    // Input n and r
    printf("Enter the values of n and r (n >= r):\n");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input: n must be greater than or equal to r.\n");
        return 1;
    }

    // Calculate and display factorial, nPr, and nCr
    printf("Factorial of %d: %lld\n", n, factorial(n));
    printf("%dP%d (Permutations): %lld\n", n, r, nPr(n, r));
    printf("%dC%d (Combinations): %lld\n", n, r, nCr(n, r));

    return 0;
}

// The output of the above program is shown as below:
/*
Enter the values of n and r (n >= r):
6 3
Factorial of 6: 720
6P3 (Permutations): 120
6C3 (Combinations): 20
*/
