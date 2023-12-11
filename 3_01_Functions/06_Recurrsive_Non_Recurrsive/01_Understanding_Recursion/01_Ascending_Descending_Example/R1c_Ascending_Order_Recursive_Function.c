#include <stdio.h>

/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    11 December 2023

    Purpose: 
    Print numbers in ascending order using recursion
    
    Description:
    This program demonstrates the printing of numbers in ascending order using a recursive approach.
    The printAscending_Recursive function is utilized to print numbers from 1 up to the entered number
    in ascending order, separated by spaces.

    The main function prompts the user to input a number. The entered number is then passed as an argument
    to the printAscending_Recursive function.

    Recursive Function Explanation:
    The printAscending_Recursive function employs a recursive approach to print numbers in ascending order.
    It operates based on two conditions:
    - Base Case: When the entered number (fnum) becomes less than or equal to 0, the function returns without
      printing anything, effectively stopping the recursive calls.
    - Recursive Case: Otherwise, the function first calls itself with fnum decremented by 1. This recursive
      call continues until it reaches the base case. After the recursive call, the current number (fnum) is
      printed, resulting in the sequence of numbers in ascending order.

    The printf statement in the main function displays a prompt for user input. Upon entering a number (e.g., 8),
    the program prints the numbers in ascending order till 8: "1 2 3 4 5 6 7 8".

    The program concludes by returning 0, signifying successful execution.
*/

void printAscending_Recursive(int fnum);

int main() {
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Numbers in Ascending Order till %d: \n", num);

    // Calling the recursive function to print numbers in ascending order
    printAscending_Recursive(num);

    return 0;
}

// Recursive function to print numbers in ascending order
void printAscending_Recursive(int fnum) {
    // Base case or exit condition
    if (fnum <= 0) {
        return; // Stop the recursive calls
    } else {
        // Recursive call to print numbers in ascending order
        printAscending_Recursive(fnum - 1);
        printf("%d ", fnum); // Print the current number after the recursive call
    }
}

/*  
Enter a number
8
Numbers in Ascending Order till 8: 
1 2 3 4 5 6 7 8
*/
