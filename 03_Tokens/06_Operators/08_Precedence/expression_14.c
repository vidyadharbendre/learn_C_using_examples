/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates arithmetic operators and comparison operators in C programming.
    It evaluates the complex expression 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20 to illustrate their usage.

    Description:
    The program evaluates the complex expression 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20 and stores the result in the variable 'result'.

    Explanation of Expression:
    - Evaluation starts from left to right based on operator precedence.
    - 100 / 20 evaluates to true (5 <= 5), which is true.
    - 10 - 5 + 100 % 10 - 20 evaluates to true (5 + 0 - 20 == 5), which is true.
    - Combining these conditions using comparison operators (<=, ==, >=, !=): true && true
    - The expression resolves to true.
    - The value true is assigned to the variable 'result'.

*/

#include <stdio.h>

int main() {
    // Expression explanation incorporated in comments
    int result = 100 / 20 <= 10 - 5 + 100 % 10 - 20 == 5 >= 1 != 20; // Expression evaluation

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is

/*

result is : 1

*/