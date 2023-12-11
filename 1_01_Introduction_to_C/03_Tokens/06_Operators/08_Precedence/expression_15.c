/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates arithmetic operations and operator precedence in C programming.
    It evaluates the complex expression 2 * ((a % 5) * (4 + (b - 3) / (c + 2))) to illustrate their usage.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 8, 15, and 4 respectively. 
    It evaluates the complex expression 2 * ((a % 5) * (4 + (b - 3) / (c + 2))) and stores the result in the variable 'result'.

    Explanation of Expression:
    - Given values: a = 8, b = 15, c = 4.
    - Evaluate innermost expressions first:
      - a % 5 = 8 % 5 = 3
      - b - 3 = 15 - 3 = 12
      - c + 2 = 4 + 2 = 6
      - (b - 3) / (c + 2) = 12 / 6 = 2
      - 4 + (b - 3) / (c + 2) = 4 + 2 = 6
      - (a % 5) * (4 + (b - 3) / (c + 2)) = 3 * 6 = 18
      - 2 * ((a % 5) * (4 + (b - 3) / (c + 2))) = 2 * 18 = 36
    - The value 36 is assigned to the variable 'result'.

*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 15;
    int c = 4;

    // Expression explanation incorporated in comments
    int result = 2 * ((a % 5) * (4 + (b - 3) / (c + 2))); // Expression evaluation

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 36

*/