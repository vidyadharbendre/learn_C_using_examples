/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 5, 2024

    Purpose:
    This program demonstrates a simple use of the ternary operator to find the maximum 
    of two integers, x and y.

    Description:
    The program compares two integers, x and y, and uses the ternary operator to assign the 
    greater value to the variable `simple_result`.

    Explanation:
    - If `x > y` is true, `simple_result` is assigned `x`; otherwise, it is assigned `y`.

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int simple_result;
    
    simple_result = (x > y) ? x : y;  // Selects the greater of x or y


    printf("Simple result (greater of x and y): %d\n", simple_result);
    return 0;
}

// Output:
// Simple result (greater of x and y): 10
