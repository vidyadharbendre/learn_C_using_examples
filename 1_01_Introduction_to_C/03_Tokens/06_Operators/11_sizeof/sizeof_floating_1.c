/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 7, 2024

    Purpose:
    This program demonstrates the use of the `sizeof` operator to determine the memory size 
    of various floating-point data types in C.

    Description:
    The program displays the memory size in bytes for different floating-point data types 
    (float, double, and long double) using the `sizeof` operator. 
    `%lu` is used as the format specifier after casting `sizeof` results to `unsigned long`.

    Explanation:
    - `sizeof(float)`: Returns the size of a `float` in bytes.
    - `sizeof(double)`: Returns the size of a `double`.
    - `sizeof(long double)`: Returns the size of a `long double`.
    - `%lu` is used to print `unsigned long` values after casting the result of `sizeof`.

    Version History:
        Version 1.1 - [Date: 07-NOV-2024] - Modified version to demonstrate `sizeof` 
        with floating-point data types using `%lu` as the format specifier.

    Note:
    This program helps understand the memory sizes associated with each floating-point data type 
    in C. Sizes may vary depending on the system architecture (e.g., 32-bit vs. 64-bit).

*/

#include <stdio.h>

int main() {
    // Demonstrating `sizeof` with various floating-point data types

    printf("Size of float....................: %lu bytes\n", (unsigned long)sizeof(float));
    printf("Size of double...................: %lu bytes\n", (unsigned long)sizeof(double));
    printf("Size of long double..............: %lu bytes\n", (unsigned long)sizeof(long double));

    return 0;
}

// The output of the above program is shown as below:
/*
Size of float....................: 4 bytes
Size of double...................: 8 bytes
Size of long double..............: 8 bytes
*/