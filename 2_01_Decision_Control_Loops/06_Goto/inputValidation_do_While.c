/*
    Program Name: InputValidationWithFlag.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates input validation using a `do-while` loop with a flag variable.
    The program prompts the user to enter a number within a valid range and continues 
    prompting until the input is valid.
*/

#include <stdio.h>

int main() {
    int number;
    int flag = 1; // Flag to control the loop

    // Prompt the user and validate input using a do-while loop
    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &number);

        // Check if the input is valid
        if (number >= 1 && number <= 10) {
            flag = 0; // Set flag to 0 to exit the loop
        } else {
            printf("Invalid input! Please try again.\n");
        }
    } while (flag); // Loop continues as long as flag is 1

    // If input is valid
    printf("Thank you! You entered a valid number: %d\n", number);

    return 0; // Indicate successful program execution
}

/*
    Example Output:

Enter a number between 1 and 10: -7
Invalid input! Please try again.
Enter a number between 1 and 10: -6
Invalid input! Please try again.
Enter a number between 1 and 10: 0
Invalid input! Please try again.
Enter a number between 1 and 10: 3
Thank you! You entered a valid number: 3
*/
