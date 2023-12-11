#include <stdio.h>
int validateInput(int fnum);
int calculateSquare(int fnum);
void displayResult(int fnum, int fresult);


int main() {
    int number;

    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    if (validateInput(number)) { // Validate user input
        int square = calculateSquare(number); // Calculate square
        displayResult(number, square); // Display the result
    } else {
        printf("Please enter a non-negative number.\n");
    }

    return 0;
}

// Function to validate user input
int validateInput(int fnum) {
    return (fnum >= 0); // Check if the number is non-negative
}

// Function to calculate the square of a number
int calculateSquare(int fnum) {
    return fnum * fnum; // Calculate the square
}

// Function to display the result
void displayResult(int fnum, int fresult) {
    printf("The square of %d is: %d\n", fnum, fresult); // Display the result
}

// The outpur of the above program is

/*

Enter a non-negative number: 99
The square of 99 is: 9801

*/

/* . 
This example demonstrates top-down programming by dividing the problem into smaller functions. The validateInput, calculateSquare, and displayResult functions perform distinct tasks, contributing to a clearer and modular structure of the program.
*/