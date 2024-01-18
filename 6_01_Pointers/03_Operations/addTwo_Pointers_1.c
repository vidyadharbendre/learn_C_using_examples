#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;  // Declare three pointers to integers

    // Assign addresses to the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    // Accept two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Add two numbers using pointers
    *ptrSum = *ptr1 + *ptr2;

    // Display the results
    printf("\nSum (direct addition): %d\n", num1 + num2);
    printf("Sum (addition through pointers): %d\n", *ptrSum);

    return 0;
}
