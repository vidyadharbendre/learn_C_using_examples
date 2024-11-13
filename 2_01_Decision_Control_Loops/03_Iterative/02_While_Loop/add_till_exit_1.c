#include <stdio.h>

int main() {
    int number;      // To store the current input number
    int sum = 0;     // To store the cumulative sum of numbers

    printf("Enter numbers to calculate their sum (enter -1 to stop):\n");

    // Take the first input
    scanf("%d", &number);

    // Loop until -1 is encountered
    while (number != -1) {
        sum += number; // Add to sum
        scanf("%d", &number); // Take the next input
    }

    printf("Sum of entered numbers: %d\n", sum);
    return 0;
}
