/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program swaps two integers using a temporary variable.

    Description:
    The program initializes two integers `x` and `y`. It then swaps the values using a temporary variable.
    After the swap, the program prints the values of `x` and `y` to verify that they have been swapped.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating swap using temporary variable.
        
    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int x = 5, y = 10, temp;

    /* Explanation:
       - Store the value of x in temp.
       - Assign the value of y to x.
       - Assign the value of temp to y.

       Final Result: x and y will be swapped.
    */

    printf("Before swap........................: x = %d, y = %d\n", x, y);

    // Swapping using temporary variable
    temp = x;
    x = y;
    y = temp;

    printf("After swap using temporary variable: x = %d, y = %d\n", x, y);

    return 0;
}

/* Example Output:
Before swap: x = 5, y = 10
After swap using temporary variable: x = 10, y = 5
*/
