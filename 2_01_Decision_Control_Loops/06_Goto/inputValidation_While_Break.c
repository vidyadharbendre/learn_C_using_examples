/*
    Program Name: InputValidationWithFlag.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates input validation using a `flag` variable.
    The program prompts the user to enter a number within a valid range
    and continues prompting until the input is valid.
*/

#include <stdio.h>

int main() {
    int number;
    int flag = 1; // Control variable for the loop

    // Prompt the user and validate input
    while (flag) {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &number);

        // Validate the input
        if (number >= 1 && number <= 10) {
            flag = 0; // Set flag to 0 to exit the loop when input is valid
        } else {
            printf("Invalid input! Please try again.\n");
        }
    }

    // If input is valid
    printf("Thank you! You entered a valid number: %d\n", number);

    return 0; // Indicate successful program execution
}

/*
    Example Output:

Enter a number between 1 and 10: -1
Invalid input! Please try again.
Enter a number between 1 and 10: -89
Invalid input! Please try again.
Enter a number between 1 and 10: 9
Thank you! You entered a valid number: 9
*/
