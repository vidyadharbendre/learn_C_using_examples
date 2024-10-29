/*
    Name of the Program: Number Type Determination (Positive, Negative, or Zero)
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program determines whether a given number is positive, 
    negative, or zero using a switch statement by categorizing the number as follows:
        - 1: Positive
        - -1: Negative
        - 0: Zero

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version using switch statement.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Categorize the number as positive (1), negative (-1), or zero (0)
    int category = (num > 0) - (num < 0);

    // Determine if the number is positive, negative, or zero using switch
    switch (category) {
        case 1:
            printf("The number is positive.\n");
            break;
        case -1:
            printf("The number is negative.\n");
            break;
        case 0:
            printf("The number is zero.\n");
            break;
        default:
            printf("Error in determining the category.\n");
    }

    return 0;
}

// Compilation command: gcc check_zero_pos_neg.c -o check_zero_pos_neg
// Execution command: ./check_zero_pos_neg

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
