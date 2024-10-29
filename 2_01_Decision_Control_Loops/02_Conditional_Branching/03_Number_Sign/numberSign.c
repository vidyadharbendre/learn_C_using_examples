/*
    Name of the Program: Number Sign Determination
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program determines whether a given number is positive, 
    negative, or zero by taking an integer input and displaying an appropriate message. 
    The program categorizes numbers as follows:
        - Positive: Number greater than 0
        - Negative: Number less than 0
        - Zero: Number equal to 0

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Determine if the number is positive, negative, or zero using if-else if statements
    if (num > 0) {
        printf("Number is positive\n");
    } else if (num < 0) {
        printf("Number is negative\n");
    } else {
        printf("Number is zero\n");
    }

    return 0;
}

// Compilation command: gcc numberSign.c -o numberSign
// Execution command: ./numberSign

/* Example Outputs:

Case 1:
Enter a number: 46
Number is positive

Case 2:
Enter a number: -12
Number is negative

Case 3:
Enter a number: 0
Number is zero
*/
