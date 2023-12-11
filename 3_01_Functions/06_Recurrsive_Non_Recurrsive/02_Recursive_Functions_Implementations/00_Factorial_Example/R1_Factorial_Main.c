#include <stdio.h>

int main() {
    int num, i;
    long factorial = 1;

    printf("Enter a number\n");
    scanf("%d", &num);

    // Display the entered number
    printf("The factorial of the entered number is %d\n", num);

    // Calculate factorial using a loop
    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // Print the factorial
    printf("%ld\n", factorial);

    return 0;
}

// The output of the above program is:
/*
Enter a number
4
The factorial of the entered number is 4
24
*/

