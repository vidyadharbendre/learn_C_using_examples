#include <stdio.h>

// Function Declaration
void displayEnteredNumber(int num);

int main() {
    int number; // Declare variable to hold user input
    
    printf("Enter a number.......: ");
    scanf("%d", &number); // Accept a number from the user
    
    displayEnteredNumber(number);
    return 0;
}

// Function with parameters
void displayEnteredNumber(int num) {
    printf("The entered number is: %d\n", num);
}

// The output of the above program is

/*

Enter a number.......: 567
The entered number is: 567

*/