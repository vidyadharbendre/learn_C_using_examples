/*  
Author   : Vidyadhar Bendre
Email    : vidyadhar.bendre@gmail.com
Date     : 4th December, 2029

Purpose  : Real-time example demonstrating Global Variables in Login System

Description:
- This program demonstrates a simple login system using global variables.
- It includes functions 'login()' and 'logout()' to simulate user login and logout functionality.
- The global variable 'loginCount' keeps track of the number of times a user logs in.

Explanation:
- The main() function simulates a user logging in twice, then logging out once, and logging in again.
- It calls the login() function to increment the 'loginCount' variable and display the total logins.
- After the logout() function is called, the user logs in again, incrementing 'loginCount'.
- Finally, it prints the 'loginCount', showing the total number of logins throughout the program.
- Global variables like 'loginCount' can be accessed and modified from any part of the program.

*/

#include <stdio.h>

// Global variable to keep track of login count
int loginCount = 0; 

// Function prototypes
void login();
void logout();

int main() {
    // Call login and logout functions
    login(); // User logs in
    login(); // User logs in again

    logout(); // User logs out

    login(); // User logs in after logout

    printf("Final login count: %d\n", loginCount);

    return 0;
}

// Function definitions for login and logout
void login() {
    loginCount++;
    printf("User logged in. Total logins: %d\n", loginCount);
}

void logout() {
    // Some logout functionality
}

// The output of the above program is shown below:
/* 
User logged in. Total logins: 1
User logged in. Total logins: 2
User logged in. Total logins: 3
Final login count: 3
*/
