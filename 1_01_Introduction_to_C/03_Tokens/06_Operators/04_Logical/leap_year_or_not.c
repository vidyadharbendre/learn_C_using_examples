/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of arithmetic and logical operators in C
    to check if a given year is a leap year.

    Description:
    A year is considered a leap year if:
    - It is divisible by 4 but not by 100, OR
    - It is divisible by 400.

    The program checks if the user-provided year meets these criteria and 
    outputs whether it is a leap year or not.

    Explanation:
    - `year % 4 == 0 && year % 100 != 0`: This part of the condition checks if 
      the year is divisible by 4 but not by 100.
    - `year % 400 == 0`: This part of the condition checks if the year is divisible by 400.
    - The combined logical OR (`||`) operator determines if either condition is true.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating leap year check with 
        arithmetic and logical operators.

    Note:
    Visualize arithmetic and logical operations in C on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int year; // Variable to store the year entered by the user

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    /* 
       Explanation of Leap Year Check:
       A leap year is:
       - Divisible by 4 and not divisible by 100, OR
       - Divisible by 400.

       The logical condition:
           (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)

       - If the above condition evaluates to true, the year is a leap year.
       - If false, it is not a leap year.

       Example:
       - For year = 2024:
           - 2024 % 4 == 0 is true
           - 2024 % 100 != 0 is true
           - Since both are true, 2024 is a leap year.
       - For year = 1900:
           - 1900 % 4 == 0 is true
           - 1900 % 100 == 0 is also true
           - However, 1900 % 400 != 0, so 1900 is not a leap year.
    */

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);  // Output if the year is a leap year
    } else {
        printf("%d is not a leap year.\n", year);  // Output if the year is not a leap year
    }

    return 0;
}

// Example Output:
/*
Enter a year: 2024
2024 is a leap year.

Enter a year: 1900
1900 is not a leap year.

Enter a year: 2000
2000 is a leap year.
*/
