#include <stdio.h>

/*
    Program to display the ASCII values of characters 'A', 'Z', 'a', and 'z'.
    
    Author: 
    Vidyadhar Bendre
    
    Date: 
    November 11, 2024
    
    Purpose:
    This program prints the ASCII values for specific characters ('A', 'Z', 'a', and 'z') 
    using the `%d` format specifier to show their integer values.

    Explanation:
    - `printf` statements use `%d` to print ASCII values, as characters are implicitly 
      cast to their integer ASCII equivalents when formatted with `%d`.
*/

int main() {
    // Displaying ASCII values of specific characters
    printf("ASCII value of 'A'.............: %d\n", 'A');
    printf("ASCII value of 'Z'.............: %d\n", 'Z');
    printf("ASCII value of 'a'.............: %d\n", 'a');
    printf("ASCII value of 'z'.............: %d\n", 'z');

    return 0;
}

// The output of the above program is shown as below:
/*
ASCII value of 'A'.............: 65
ASCII value of 'Z'.............: 90
ASCII value of 'a'.............: 97
ASCII value of 'z'.............: 122
*/
