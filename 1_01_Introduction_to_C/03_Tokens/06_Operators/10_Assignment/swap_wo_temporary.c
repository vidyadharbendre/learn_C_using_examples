/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program swaps two integers without using a temporary variable.

    Description:
    The program initializes two integers `x` and `y`. It then swaps the values without using a temporary variable,
    by performing arithmetic operations. After the swap, the program prints the values of `x` and `y` to verify that they have been swapped.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating swap without temporary variable.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int x = 5, y = 10;

    /* Explanation:
       - Add x and y, and assign the sum to x.
       - Subtract the new value of x (which is x + y) by y to get the original value of x, assign it to y.
       - Subtract the new value of x (which is x + y) by the new value of y to get the original value of y, assign it to x.

       Final Result: x and y will be swapped.
    */

    printf("Before swap..........................: x = %d, y = %d\n", x, y);

    // Swapping without temporary variable
    x = x + y;  // x = 5 + 10 = 15
    y = x - y;  // y = 15 - 10 = 5
    x = x - y;  // x = 15 - 5 = 10

    printf("After swap without temporary variable: x = %d, y = %d\n", x, y);

    return 0;
}

/* Example Output:
Before swap: x = 5, y = 10
After swap without temporary variable: x = 10, y = 5
*/
