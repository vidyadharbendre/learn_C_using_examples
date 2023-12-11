/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates the compound assignment operator in C programming.
    It evaluates the expression a %= (b + c) to illustrate the usage of the compound assignment operator %=.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 21, 7, and 2 respectively. 
    It evaluates the expression a %= (b + c) and stores the result in the variable 'result'.

    Explanation of Compound Assignment Expression:
    - a %= (b + c): The compound assignment operator %= performs the modulus operation on 'a' with the result of (b + c).
    - (b + c) computes the sum of 'b' (7) and 'c' (2), resulting in 9.
    - a %= (b + c) calculates the modulus of 'a' (21) with the sum (9), which is 3.
    - The value of 'a' after the operation is 3, and that value is assigned to the variable 'result'.

*/

#include <stdio.h>

int main() {
    int a = 21;
    int b = 7;
    int c = 2;

    // Compound assignment expression explanation incorporated in comments
    int result = a %= (b + c); // Compound assignment expression a %= (b + c)

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is

/*

result is : 3

*/