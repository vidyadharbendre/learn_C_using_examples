/*

Author  : Vidyadhar Bendre

Email   : vidyadhar.bendre@gmail.com

Date    : 9 November 2023

Purpose:
This program aims to display numbers in reverse order, starting from a user-defined value 'n' down to 1. It utilizes a 'for' loop to print the sequence of numbers in reverse.

Description:
The program prompts the user to enter a value 'n' using the scanf() function. After receiving the input, it proceeds to display the numbers in reverse order, starting from 'n' down to 1.

Explanation:
Variable Initialization: The program initializes two integer variables n and j.
User Input: It prompts the user to enter a value for 'n' using the printf() and scanf() functions.
Looping Structure: Utilizing a 'for' loop, it starts from the value entered (n) and decrements by one in each iteration until it reaches 1 (i > 0).
Printing Numbers: Within the loop, the printf() function prints the current value of 'i' (the loop control variable representing the numbers in reverse order) followed by a space.
Loop Termination: The loop continues until 'i' becomes 0 (not inclusive) and then the program exits.
Usage:
The program demonstrates the usage of a 'for' loop to display a sequence of numbers in reverse order, catering to scenarios where countdowns or reverse sequences are needed.

Example Output:
For instance, if the user inputs '5':

enter the value of n: 5
The numbers displayed are: 5 4 3 2 1

*/


#include <stdio.h>
int main() {
    int n, j; // Declare integer variables 'n' and 'j'
    printf("\n enter the value of n:"); // Prompt the user to enter a value for 'n'
    scanf("%d", &n); // Read the input value provided by the user and store it in 'n'

    printf("\n The numbers are displayed are:"); // Display a message indicating number display will start

    for (int i = n; i > 0; i--) { // Loop starts from 'n' and iterates while 'i' is greater than 0, decrementing 'i' in each iteration
        printf("%d ", i); // Print the current value of 'i' followed by a space
    }
    return 0; // Return 0 to indicate successful execution
}

// The output of the above program is
/*

 enter the value of n:5

 The numbers are displayed are:5 4 3 2 1 

 */
