/*
    Program Name: GotoLabelExample.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates the use of a `goto` statement to handle input validation. 
    The program prompts the user to enter a number within a valid range. If the input 
    is invalid, the control jumps to a labeled section for re-prompting the user.
*/

#include <stdio.h>

int main() {
    int number;

    // Label for retrying input
    input_retry:
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    // Validate the input
    if (number < 1 || number > 10) {
        printf("Invalid input! Please try again.\n");
        goto input_retry; // Jump back to re-prompt the user
    }

    // If input is valid
    printf("Thank you! You entered a valid number: %d\n", number);

    return 0; // Indicate successful program execution
}

// The output of the program is shown as below:
/*
Enter a number between 1 and 10: -9
Invalid input! Please try again.
Enter a number between 1 and 10: -0
Invalid input! Please try again.
Enter a number between 1 and 10: 89
Invalid input! Please try again.
Enter a number between 1 and 10: 8
Thank you! You entered a valid number: 8
*/