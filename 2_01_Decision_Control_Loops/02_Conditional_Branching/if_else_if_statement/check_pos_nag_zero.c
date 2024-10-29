/*
    Name of the Program: Number Type Determination (Positive, Negative, or Zero)
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program determines whether a given number is positive, 
    negative, or zero using if-else if statements. 

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version using if-else if statements.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Determine if the number is positive, negative, or zero using if-else if
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

// Compilation command: gcc check_pos_neg_zero.c -o check_pos_neg_zero
// Execution command: ./check_pos_neg_zero

/* Example Outputs:

Case 1:
Enter a number: 5
The number is positive.

Case 2:
Enter a number: -3
The number is negative.

Case 3:
Enter a number: 0
The number is zero.
*/
