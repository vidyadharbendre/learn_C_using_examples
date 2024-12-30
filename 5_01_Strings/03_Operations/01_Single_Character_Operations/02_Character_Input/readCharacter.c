/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 23 December 2023
Version 2 - 30 December 2024
  

Purpose:
Demonstrate reading a single character from the console using `getchar()` and printing it.

Description:
- The program prompts the user to enter a single character.
- It uses the `getchar()` function to read the input.
- The entered character is then displayed using `printf()`.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    char ch; // Variable to store the entered character

    // Prompt the user to enter a character
    printf("Enter a character: ");
    ch = getchar(); // Read the character using getchar()

    // Display the entered character
    printf("Character entered: %c\n", ch);

    return 0; // Indicate successful program execution
}

/*
Sample Output:
--------------
Enter a character: A
Character entered: A
*/

/*
Notes:
1. The program reads only the first character entered by the user.
2. Any additional characters typed are ignored unless processed separately.
*/
