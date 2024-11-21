/*
    Program Name: InputValidationWithDoWhile.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates input validation using a `do-while` loop.
    The program prompts the user to enter a number within a valid range
    and continues prompting until the input is valid.
*/

#include <stdio.h>

int main() {
    int number;

    // Prompt the user and validate input using a do-while loop
    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &number);

        // Check if the input is valid
        if (number < 1 || number > 10) {
            printf("Invalid input! Please try again.\n");
        }
    } while (number < 1 || number > 10); // Repeat until the input is valid

    // If input is valid
    printf("Thank you! You entered a valid number: %d\n", number);

    return 0; // Indicate successful program execution
}

/*
    Example Output:

Enter a number between 1 and 10: -6
Invalid input! Please try again.
Enter a number between 1 and 10: 0
Invalid input! Please try again.
Enter a number between 1 and 10: 5
Thank you! You entered a valid number: 5

*/
