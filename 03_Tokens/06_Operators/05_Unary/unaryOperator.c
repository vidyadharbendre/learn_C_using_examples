/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 9 November, 2023

Purpose:
This C program demonstrates the usage of various unary operators, including unary plus, unary minus, increment, decrement, and logical NOT.

Description:
The program initializes variables and performs operations using different unary operators.

Using Unary Operators:
- Unary Plus and Minus: Representing positive and negative values.
- Increment and Decrement: Changing the value of variables.
- Logical NOT: Negating conditions.

The example includes increments, decrements, and negations to showcase the impact of each unary operator.

*/

#include <stdio.h>

int main() {
    // Unary Plus and Minus
    int positiveValue = +5;
    int negativeValue = -7;

    // Increment and Decrement
    int incrementVar = 10;
    int decrementVar = 8;

    incrementVar++; // Incrementing 'incrementVar' by 1
    decrementVar--; // Decrementing 'decrementVar' by 1

    // Logical NOT
    int flag = 1;
    int negatedFlag = !flag;

    // Displaying results
    printf("Unary Plus..................: %d\n", positiveValue);
    printf("Unary Minus.................: %d\n", negativeValue);
    printf("Incremented Value...........: %d\n", incrementVar);
    printf("Decremented Value...........: %d\n", decrementVar);
    printf("Logical NOT.................: %d (Original...: %d)\n", negatedFlag, flag);

    return 0;
}

// The output of the above program is shown below

/*

Unary Plus..................: 5
Unary Minus.................: -7
Incremented Value...........: 11
Decremented Value...........: 7
Logical NOT.................: 0 (Original...: 1)

*/