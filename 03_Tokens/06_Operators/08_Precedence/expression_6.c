/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operations and conditional statements in C.
    It evaluates the expression (a > b && b <= c) || !(a % c == 0) to showcase how logical operators and conditions work in C.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 15, 4, and 3 respectively. 
    It evaluates the logical expression ((a > b && b <= c) || !(a % c == 0)) and stores the result in the variable 'result'.

    Explanation of Logical Expression:
    - (a > b && b <= c): Two conditions are checked:
      - a > b: Checks if 'a' (value 15) is greater than 'b' (value 4). (True)
      - b <= c: Checks if 'b' (value 4) is less than or equal to 'c' (value 3). (False)
      - The result of this part is False because the second condition is not met.
    
    - !(a % c == 0): This part computes:
      - a % c: Computes the remainder of 'a' (value 15) divided by 'c' (value 3). (0)
      - a % c == 0: Checks if the remainder is equal to 0. (True)
      - !(a % c == 0): Negates the result of a % c == 0. (False)
      - The result of this part is False due to the negation.

    - The entire expression (a > b && b <= c) || !(a % c == 0) evaluates to True || False, resulting in True.

*/

#include <stdio.h>

int main() {
    int a = 15;
    int b = 4;
    int c = 3;

    // Logical expression explanation incorporated in comments
    int result = (a > b && b <= c) || !(a % c == 0); // Logical expression ((a > b && b <= c) || !(a % c == 0))

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is 

/*

result is : 0

*/