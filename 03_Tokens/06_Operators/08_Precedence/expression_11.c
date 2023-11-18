/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program demonstrates logical operators and comparison operators in C programming.
    It evaluates the complex logical expression a+2 > b || ! c && a == d || a-2 <= e to showcase their usage.

    Description:
    The program initializes integer variables 'a', 'b', 'c', 'd', and 'e' with values 11, 6, 0, 7, and 5 respectively. 
    It evaluates the complex logical expression a+2 > b || ! c && a == d || a-2 <= e and stores the result in the variable 'result'.

    Explanation of Logical and Comparison Expression:
    - Given values: a = 11, b = 6, c = 0, d = 7, e = 5.
    - a+2 > b: Evaluates to true (11 + 2 > 6), which is true.
    - !c: Negation of c (0) results in true.
    - a == d: Compares 'a' and 'd' (11 == 7), which is false.
    - a-2 <= e: Evaluates to true (11 - 2 <= 5), which is true.
    - Combining these conditions using logical operators (|| and &&): true || true && false || true
    - The expression resolves to true || false || true, which evaluates to true.
    - The value true is assigned to the variable 'result'.

*/

#include <stdio.h>

int main() {
    int a = 11;
    int b = 6;
    int c = 0;
    int d = 7;
    int e = 5;

    // Logical and comparison expression explanation incorporated in comments
    int result = a + 2 > b || !c && a == d || a - 2 <= e; // Logical and comparison expression

    printf("result is : %d\n", result);

    return 0;
}

//The output of the above program is 
/*

result is : 1

*/