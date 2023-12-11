#include <stdio.h>

void fibonacciFunction(int fcount);
int fibonacciRecursive(int fn);

int main() {
    int count = 10, int; // Number of terms to generate
    printf("Fibonacci Series using function: ");
    fibonacciFunction(count);
    printf("\n");

    printf("Fibonacci Series using recursion: ");
    for (i = 0; i < count; ++i) {
        printf("%d, ", fibonacciRecursive(i));
    }
    printf("\n");

    printf("Fibonacci Series for 5 terms using function: ");
    fibonacciFunction(5);
    printf("\n");

    printf("Fibonacci Series for 5 terms using recursion: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d, ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}

void fibonacciFunction(int fcount) {
    int first = 0, second = 1, next;
    for (int i = 0; i < fcount; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d, ", next);
    }
}

int fibonacciRecursive(int fn) {
    if (fn <= 1) {
        return fn;
    } else {
        return fibonacciRecursive(fn - 1) + fibonacciRecursive(fn - 2);
    }
}
