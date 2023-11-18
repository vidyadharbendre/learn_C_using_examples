/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates the conditional operator (ternary operator) in C programming.
    It evaluates the expression (a > b) ? a++ : c-- to showcase the usage of the ternary conditional operator.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 8, 3, and 5 respectively. 
    It evaluates the ternary conditional expression (a > b) ? a++ : c-- and stores the result in the variable 'result'.

    Explanation of Ternary Conditional Expression:
    - (a > b) checks if the value of 'a' (8) is greater than 'b' (3). (True)
    - If the condition is True, the expression returns the value of 'a++', which increments 'a' by 1 after using its current value.
    - If the condition is False, the expression returns the value of 'c--', which decrements 'c' by 1 after using its current value.
    - In this case, since the condition (a > b) is True, 'a' is incremented by 1 (a becomes 9), and the value of 'result' is the previous value of 'a' (which is 8).

*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 3;
    int c = 5;

    // Ternary conditional expression explanation incorporated in comments
    int result = (a > b) ? a++ : c--; // Ternary conditional expression ((a > b) ? a++ : c--)

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 8

*/