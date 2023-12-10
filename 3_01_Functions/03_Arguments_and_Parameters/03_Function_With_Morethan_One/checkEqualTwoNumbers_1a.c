#include <stdio.h>

int main() {
    int var1, var2;

    // Prompt user to enter the first number
    printf("Enter the first number\n");

    // Read the first number from user input
    scanf("%d", &var1); // Added '&' to store the input in the variable

    // Prompt user to enter the second number
    printf("Enter the second number\n");

    // Read the second number from user input
    scanf("%d", &var2); // Added '&' to store the input in the variable

    // Check if the entered numbers are equal
    if (var1 == var2) {
        printf("The entered numbers %d and %d are equal\n", var1, var2);
    } else {
        printf("The entered numbers %d and %d are *NOT* equal\n", var1, var2); // Added '\n' for readability
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Enter the first number
34
Enter the second number
43
The entered numbers 34 and 43 are *NOT* equal
*/

/* . 
Enter the first number
34
Enter the second number
34
The entered numbers 34 and 34 are equal
*/