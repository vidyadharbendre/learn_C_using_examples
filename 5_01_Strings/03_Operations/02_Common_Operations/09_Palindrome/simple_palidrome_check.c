#include <stdio.h>  // Include standard input-output library

/*
Author: Vidyadhar Bendre
Date: 30 December 2024
Purpose: Reverse a string and check if it's a palindrome

Description:
- The program takes a string and checks whether it is a palindrome by reversing the string.
- It then compares the original string with the reversed string to check for equality.
- The program prints whether the string is a palindrome or not and displays the reversed string.

Note: You can visualize this program using pythontutor.com to step through each operation.
*/

int findStrLength(char fmyStr[]);  // Function to find the length of a string

int main() {
    char myStr[] = "MADAM";       // Original string to check for palindrome
    char myRev[50];               // Array to store the reversed string
    int i = 0, j = 0, length;    // Loop variables and string length
    int isPalindrome = 0;         // Flag to check if string is palindrome
    
    // Find the length of the string using the helper function
    length = findStrLength(myStr);
    printf("Length of string: %d\n", length);
  
    // Reverse the string and store it in 'myRev'
    for (i = 0; i < length; i++) {
        myRev[j] = myStr[length - 1 - i]; // Copy characters in reverse order
        j++;
    }
    myRev[j] = '\0';  // Null-terminate the reversed string
  
    // Check if the original string is a palindrome
    for (i = 0; i < length; i++) {
        if (myStr[i] != myRev[i]) {
            isPalindrome = 1;  // Not a palindrome
            break;
        }
    }

    // Print the result of palindrome check
    if (isPalindrome == 1) {
        printf("Not a palindrome\n");
    } else {
        printf("Palindrome\n");
    }

    // Print the reversed string
    printf("Reversed string: %s\n", myRev);
  
    return 0;  // Indicate successful program execution
}

// Function to find the length of a string
int findStrLength(char fmyStr[]) {
    int flen = 0;
    while (fmyStr[flen] != '\0') {
        flen++;  // Increment the length until null character is found
    }
    return flen;  // Return the length of the string
}
// The output of the above program is shown as below

/*
Length of string: 5
Palindrome
Reversed string: MADAM
*/