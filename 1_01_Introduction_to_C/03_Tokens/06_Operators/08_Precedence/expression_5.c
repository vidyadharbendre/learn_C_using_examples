/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    October 23, 2023

    Purpose:
    This program aims to demonstrate complex arithmetic operations involving increment, decrement, division, and modulo in C programming.
    It showcases how these operations affect variables' values and their impact within an arithmetic expression, emphasizing operator precedence.

    Description:
    The program initializes integer variables 'a', 'b', and 'c' with values 8, 3, and 2 respectively. 
    It performs a complex arithmetic operation (a + (b++) - (--c * a)) and illustrates operator precedence rules.

    Explanation:
    The expression breaks down as follows:
    - a: Value of 'a' is 8.
    - b++: Post-increment 'b', resulting in 3. However, this post-incremented value of 'b' is used after this expression.
    - --c: Pre-decrement 'c', resulting in 1.
    - --c * a: Multiply the decremented 'c' by the current value of 'a' (which is 8). The result is 8.
    - a + (b++) - (--c * a): The entire expression combines 'a', the post-incremented 'b', and the result of the multiplication of decremented 'c' and 'a'. 
    - a (value of 'a') is 8.
    - (b++) uses the previous value of 'b' (which was 3). After this expression, 'b' becomes 4.
    - --c * a results in 8.
    - The calculation then proceeds: 8 + 3 - 8 equals 3.

*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 3;
    int c = 2;

    int result = a + (b++) - (--c * a); // Arithmetic expression (a + (b++) - (--c * a))

    printf("result is : %d\n", result);

    return 0;
}

// The output of the above program is
/*
result is : 3 
*/