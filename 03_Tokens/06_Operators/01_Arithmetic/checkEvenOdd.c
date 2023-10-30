/* 
    
    Author  :   Vidyadhar Bendre

    Email   :   vidyadhar.bendre@gmail.com
    
    Purpose: 
    This program determines whether an entered integer is an even or an odd number using the modulus operator in C.

    Description:
    - The program prompts the user to enter an integer.
    - It utilizes the modulus operator (%) to find the remainder when the entered number is divided by 2.
    - If the remainder is 0, the program identifies the number as even; otherwise, it classifies it as odd.
    - The program then displays the result, confirming whether the entered number is even or odd.
*/

#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd using the modulus operator
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
