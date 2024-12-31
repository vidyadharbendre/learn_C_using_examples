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

/*
Author: Vidyadhar Bendre
Date: 30 December 2024
Purpose: Reverse a string and check if it's a palindrome

Description:
- The program preprocesses the string to ignore spaces and case sensitivity.
- It then checks whether the string is a palindrome by reversing it.
*/

#include <stdio.h>   // Include standard input-output library

/*
Author: Vidyadhar Bendre
Date: 30 December 2024
Purpose: Reverse a string and check if it's a palindrome

Description:
- The program preprocesses the string to ignore spaces and case sensitivity using user-defined functions.
- It then checks whether the string is a palindrome by reversing it.
*/

// User-defined functions
int isalnum_custom(char ch);  // Check if character is alphanumeric
char tolower_custom(char ch); // Convert character to lowercase

int findStrLength(char str[]);  // Function to find the length of a string

int main() {
    char myStr[] = "Was it a car or a cat I saw";  // Original string to check for palindrome
    char processedStr[100];  // Array to store processed string (no spaces, lowercase)
    char myRev[100];         // Array to store the reversed string
    int i = 0, j = 0, length, isPalindrome = 1;  // Variables for indices, length, and flag

    // Preprocess the string: remove spaces and convert to lowercase
    while (myStr[i] != '\0') {
        if (isalnum_custom(myStr[i])) {  // Check if the character is alphanumeric
            processedStr[j++] = tolower_custom(myStr[i]);  // Convert to lowercase and store
        }
        i++;
    }
    processedStr[j] = '\0';  // Null-terminate the processed string

    // Find the length of the processed string
    length = findStrLength(processedStr);
    printf("Length of processed string: %d\n", length);

    // Reverse the processed string and store it in 'myRev'
    for (i = 0; i < length; i++) {
        myRev[i] = processedStr[length - 1 - i];
    }
    myRev[length] = '\0';  // Null-terminate the reversed string

    // Check if the processed string is a palindrome
    for (i = 0; i < length; i++) {
        if (processedStr[i] != myRev[i]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    // Print the result of palindrome check
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    // Print the reversed string
    printf("Reversed string: %s\n", myRev);

    return 0;  // Indicate successful program execution
}

// Function to find the length of a string
int findStrLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;  // Return the length of the string
}

// User-defined isalnum function
int isalnum_custom(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        return 1;  // Character is alphanumeric
    }
    return 0;  // Character is not alphanumeric
}

// User-defined tolower function
char tolower_custom(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');  // Convert to lowercase
    }
    return ch;  // Return the character as is
}
