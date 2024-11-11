#include <stdio.h>

/*
    Program to convert an uppercase character to lowercase.
    
    Author: 
    Vidyadhar Bendre
    
    Date: 
    November 11, 2024
    
    Purpose:
    This program takes an uppercase character input from the user, converts it 
    to its lowercase equivalent, and displays the result. 
    
    Description:
    - The ASCII value of uppercase letters ('A' to 'Z') can be converted to 
      lowercase ('a' to 'z') by adding 32.
    - This program only works correctly for uppercase alphabetic characters.

    Explanation:
    - The program reads a character input from the user.
    - If the character is in the uppercase range ('A' to 'Z'), it converts 
      it by adding 32 to its ASCII value, producing the lowercase equivalent.
    - If the character is already lowercase or non-alphabetic, it remains unchanged.

    Notes:
    - Only one character is processed per run.
*/

int main() {
    char uppercase, lowercase;

    // Prompt the user for an uppercase character
    printf("Enter an uppercase character: ");
    scanf(" %c", &uppercase);

    // Check if the input is an uppercase letter
    if (uppercase >= 'A' && uppercase <= 'Z') {
        // Convert to lowercase by adding 32
        lowercase = uppercase + 32;
        printf("The lowercase equivalent of '%c' is '%c'.\n", uppercase, lowercase);
    } else {
        printf("The character '%c' is not an uppercase letter.\n", uppercase);
    }

    return 0;
}

//The output of the above program is shown as below
/*
vidyadharbendre@Vidyadhars-MacBook-Pro 06_Conditional % ./convert_upper_lower 
Enter an uppercase character: T
The lowercase equivalent of 'T' is 't'.
vidyadharbendre@Vidyadhars-MacBook-Pro 06_Conditional % ./convert_upper_lower
Enter an uppercase character: 4
The character '4' is not an uppercase letter.
vidyadharbendre@Vidyadhars-MacBook-Pro 06_Conditional % ./convert_upper_lower
Enter an uppercase character: %
The character '%' is not an uppercase letter.
vidyadharbendre@Vidyadhars-MacBook-Pro 06_Conditional % ./convert_upper_lower
Enter an uppercase character: A
The lowercase equivalent of 'A' is 'a'.
*/