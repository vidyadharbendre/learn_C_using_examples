/*
    Name of the Program: Simple Login Verification
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program performs a basic login verification by comparing user-entered 
    credentials with pre-set username and password values. The program checks:
        - Username: should match "user123"
        - Password: should match "pass456"
    If both match, the login is successful; otherwise, it displays "Invalid credentials."

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with a note for PythonTutor.com 
        for visualizing C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "user123";
    char password[] = "pass456";
    char input_username[50];
    char input_password[50];

    printf("Enter username: ");
    fgets(input_username, sizeof(input_username), stdin);
    input_username[strcspn(input_username, "\n")] = '\0'; // Remove trailing newline

    printf("Enter password: ");
    fgets(input_password, sizeof(input_password), stdin);
    input_password[strcspn(input_password, "\n")] = '\0'; // Remove trailing newline

    // Compare input credentials with preset username and password
    if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
        printf("Login successful\n");
    } else {
        printf("Invalid credentials\n");
    }

    return 0;
}

// Compilation command: gcc loginAuthentication.c -o loginAuthentication
// Execution command: ./loginAuthentication

/* Example Outputs:

Case 1:
Enter username: user123
Enter password: pass456
Login successful

Case 2:
Enter username: admin
Enter password: secret
Invalid credentials
*/
