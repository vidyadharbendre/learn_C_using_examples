/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operators and comparison operators in C programming.
    It evaluates the logical expression 10!=10 || 5<4 && 8 to illustrate their usage.

    Description:
    The program evaluates the logical expression 10!=10 || 5<4 && 8 and stores the result in the variable 'result'.

    Explanation of Logical Expression:
    - 10 != 10: Compares if 10 is not equal to 10 (false).
    - 5 < 4: Checks if 5 is less than 4 (false).
    - 8: Constant value (true).
    - Combining these conditions using logical operators (|| and &&): false || false && true
    - The expression resolves to false || false, which evaluates to false.
    - The value false is assigned to the variable 'result'.

*/

#include <stdio.h>

int main() {
    // Logical expression explanation incorporated in comments
    int result = 10 != 10 || 5 < 4 && 8; // Logical expression evaluation    

    printf("result is : %d\n", result);

    return 0;
}
