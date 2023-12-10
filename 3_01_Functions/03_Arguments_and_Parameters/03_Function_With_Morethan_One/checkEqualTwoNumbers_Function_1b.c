#include <stdio.h>

void checkEqualNumbers(int fvar1, int fvar2);

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

    // calll function
    checkEqualNumbers(var1, var2);

    return 0;
}

void checkEqualNumbers(int fvar1, int fvar2){
    // Check if the entered numbers are equal
    if (fvar1 == fvar2) {
        printf("The entered numbers %d and %d are equal\n", fvar1, fvar2);
    } else {
        printf("The entered numbers %d and %d are *NOT* equal\n", fvar1, fvar2); // Added '\n' for readability
    }
}

// The output of the above program is shown as below:

/*  
Enter the first number
98
Enter the second number
89
The entered numbers 98 and 89 are *NOT* equal
*/