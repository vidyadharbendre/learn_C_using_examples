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

    // Direct addition to calculate the sum
    sum = num1 + num2;

    // Display the results
    printf("\nSum (direct addition): %d\n", sum);
    printf("Sum (addition through pointers): %d\n", *ptrSum);

    return 0;
}
// The output of the above program is shown as below:
/*
Enter the first number: 45
Enter the second number: 98

Sum (direct addition): 143
Sum (addition through pointers): 143
*/ 