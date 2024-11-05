/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 5, 2024

    Purpose:
    This program demonstrates the ternary operator with arithmetic expressions to check if a number is even or odd.

    Description:
    The program uses the ternary operator to determine if a given integer `num` is even or odd, performing different calculations based on the result.

    Explanation:
    - If `num` is even, the result is `num / 2`; if odd, it is `num * 3 + 1`.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int num = 15;
    int arithmetic_result; 

    arithmetic_result = (num % 2 == 0) ? (num / 2) : (num * 3 + 1);
    printf("Arithmetic result (based on even or odd): %d\n", arithmetic_result);
    return 0;
}

// Output:
// Arithmetic result (based on even or odd): 46
