#include <stdio.h>

int main() {
    float num1, num2, sum;
    float *ptr1, *ptr2, *ptrSum;  // Declare three pointers to floats

    // Assign addresses to the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    // Accept two floating-point numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Direct addition to calculate the sum
    sum = num1 + num2;

    // Display the results with precision up to two decimal points
    printf("\nSum (direct addition): %.2f\n", sum);
    printf("Sum (addition through pointers): %.2f\n", *ptrSum);

    return 0;
}

// The output of the above program is shown as below:
/*
Enter the first number: 67.89      
Enter the second number: 43.21

Sum (direct addition): 111.10
Sum (addition through pointers): 111.10
*/