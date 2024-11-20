/*
    Program Name: DoWhileLoopExample.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program demonstrates the use of a `do-while` loop by providing a menu-driven 
    application. The user is prompted to perform addition of two numbers repeatedly 
    until they choose to exit. The program ensures the loop runs at least once and 
    then continues based on the user's input.
*/

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Display the menu
        printf("\n=== Menu ===\n");
        printf("1. Add two numbers\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Prompt user for two numbers
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);

                // Perform addition
                result = num1 + num2;
                printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, result);
                break;

            case 2:
                // Exit the program
                printf("Exiting the program. Thank you!\n");
                break;

            default:
                // Handle invalid input
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 2); // Continue until user chooses to exit

    return 0; // Indicate successful program termination
}
// The output of the above program is shown as below
/*
=== Menu ===
1. Add two numbers
2. Exit
Enter your choice: 1
Enter the first number: 23 34
Enter the second number: The sum of 23.00 and 34.00 is 57.00

=== Menu ===
1. Add two numbers
2. Exit
Enter your choice: 2
Exiting the program. Thank you!
*/