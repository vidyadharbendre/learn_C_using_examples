#include <stdio.h>

// Function Declarations
void displayEnteredNumber(int numFromMain);
int getNumberFromUser();

// Main Function
int main() {
    int userNumber; //declaration
    
    userNumber = getNumberFromUser(); // Get a number from the user
    displayEnteredNumber(userNumber);
    
    return 0;
}
// Function to get a number from the user
int getNumberFromUser() {
    int userInput; // Variable specifically for user input
    printf("Enter a number.......: ");
    scanf("%d", &userInput);
    return userInput;
}

// Function to display the entered number
void displayEnteredNumber(int numFromMain) {
    printf("The entered number is: %d\n", numFromMain);
}



// The output of the above program is

/*

Enter a number.......: 45678
The entered number is: 45678

*/