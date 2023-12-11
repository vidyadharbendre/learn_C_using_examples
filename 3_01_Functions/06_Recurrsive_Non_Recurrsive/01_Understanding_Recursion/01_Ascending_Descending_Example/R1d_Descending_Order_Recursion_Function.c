#include <stdio.h>

/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    11 December 2023

    Purpose: 
    Print numbers in descending order using recursion
    
    Description:
    This program demonstrates the printing of numbers in descending order using a recursive approach.
    The printDescending_Recursive function is utilized to print numbers from the entered number down to 1
    in descending order, separated by spaces.

    The main function prompts the user to input a number. The entered number is then passed as an argument
    to the printDescending_Recursive function.

    Recursive Function Explanation:
    The printDescending_Recursive function employs a recursive approach to print numbers in descending order.
    It operates based on two conditions:
    - Base Case: When the entered number (fnum) becomes less than or equal to 0, the function returns without
      performing any further recursive calls, effectively stopping the process.
    - Recursive Case: Otherwise, the function first prints the current number (fnum), followed by a space.
      Then, it calls itself with fnum decremented by 1. This recursive call continues until it reaches the base case,
      resulting in the sequence of numbers printed in descending order.

    The printf statement in the main function displays a prompt for user input. Upon entering a number (e.g., 5),
    the program prints the numbers in descending order till 5: "5 4 3 2 1".

    The program concludes by returning 0, signifying successful execution.
*/

void printDescending_Recursive(int fnum);

int main() {
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Numbers in Descending Order till %d: \n", num);

    // Calling the recursive function to print numbers in descending order
    printDescending_Recursive(num);

    return 0;
}

// Recursive function to print numbers in descending order
void printDescending_Recursive(int fnum) {
    // Base case or exit condition
    if (fnum <= 0) {
        return; // Stop the recursive calls
    } else {
        // Print the current number followed by a space
        printf("%d ", fnum);
        // Recursive call to print numbers in descending order
        printDescending_Recursive(fnum - 1);
    }
}

/*  
Enter a number
5
Numbers in Descending Order till 5: 
5 4 3 2 1
*/
