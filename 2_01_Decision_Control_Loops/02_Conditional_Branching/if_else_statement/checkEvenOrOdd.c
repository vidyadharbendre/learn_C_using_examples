/*
    Name of the Program: Even or Odd Number Checker
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program determines whether a user-entered number 
    is even or odd. It reads an integer input from the user, checks if the 
    number is divisible by 2, and displays the result accordingly.

    Version History:
        Version 1.0 - [Date: 2024-28-10] - Added a note about PythonTutor.com 
        to write and visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}

// Compilation command: gcc checkEvenOrOdd.c -o checkEvenOrOdd
// Execution command: ./checkEvenOrOdd

/* Example Outputs:

Case 1:
Enter a number: 4
The number is even.

Case 2:
Enter a number: 7
The number is odd.

*/
