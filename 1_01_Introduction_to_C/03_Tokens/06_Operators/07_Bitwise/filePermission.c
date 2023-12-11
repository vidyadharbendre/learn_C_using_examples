/*

Write a C program that sets both write and execute permissions for a file. Define the necessary constants for these permissions, initialize a variable, and use bitwise OR operations to grant the permissions. Finally, check and display the granted permissions for the user. Please provide the complete program to achieve this.

Author: 
Vidyadhar Bendre

Date:
5th November, 2023

Purpose:
The purpose of this program is to demonstrate the use of bitwise operators, specifically the bitwise OR (|) and bitwise AND (&) operators, to manipulate file permissions. The program sets both write and execute permissions for a file by initializing a variable and using bitwise OR operations. It also checks and displays the granted permissions for the user.

Description:
This C program serves as an illustrative example of how to manage file permissions using bitwise operations. It defines three permission flags: Read, Write, and Execute, each represented by different bit positions. The program initializes a variable named permissions with no permissions (i.e., set to 0).

Using the bitwise OR operator (|), it grants write and execute permissions by setting the corresponding bits in the permissions variable. The program then checks if the user has specific permissions using the bitwise AND operator (&). If a specific permission is granted, it prints a corresponding message indicating that the user has that permission; otherwise, it prints a message indicating that the user does not have that permission.

*/


#include <stdio.h>

// Permission flags
#define Read 1
#define Write 2
#define Execute 4

int main() {
    // Define a variable to store file permissions
    int permissions = 0; // Initialize with no permissions

    // Set file permissions using bitwise OR
    permissions |= Write; // Grant write permission
    permissions |= Execute; // Grant execute permission

    // Check if a user has specific permissions using bitwise AND
    if (permissions & Read) {
        printf("User has read permission.\n");
    } 
    else {
        printf("User does not have read permission.\n");
    }

    if (permissions & Write) {
        printf("User has write permission.\n");
    } 
    else {
        printf("User does not have write permission.\n");
    }

    if (permissions & Execute) {
        printf("User has execute permission.\n");
    } 
    else {
        printf("User does not have execute permission.\n");
    }

    return 0;
}


// The output of the above program as shown below:

/*

User does not have read permission.
User has write permission.
User has execute permission.

*/

