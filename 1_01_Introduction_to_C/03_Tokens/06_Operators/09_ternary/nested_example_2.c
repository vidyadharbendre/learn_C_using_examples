/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 5, 2024

    Purpose:
    This program demonstrates a nested ternary operation to find the maximum of three integers: a, b, and c.

    Description:
    The program uses nested ternary operators to determine the maximum among `a`, `b`, and `c`.

    Explanation:
    - First, it checks if `a > b`. If true, `a` is compared with `c`; if false, `b` is compared with `c`.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int a = 3, b = 8, c = 6;
    int nested_result;

    nested_result = (a > b) ? a : (b > c ? b : c);

    printf("Nested result (max of a, b, and c): %d\n", nested_result);
    return 0;
}

// Output:
// Nested result (max of a, b, and c): 8
