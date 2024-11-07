/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 7, 2024

    Purpose:
    This program demonstrates the use of the `sizeof` operator to determine the memory size 
    of various integer data types in C, including signed and unsigned variations.

    Description:
    The program displays the memory size in bytes for different integer data types 
    (signed, unsigned, short, and long) using the `sizeof` operator. The `%zu` 
    format specifier is used to print `size_t` values for portability.

    Explanation:
    - `sizeof(int)`: Returns the size of an `int` in bytes on the current platform.
    - `sizeof(unsigned int)`: Returns the size of an unsigned `int`.
    - `sizeof(short)`: Returns the size of a `short int`.
    - `sizeof(long)`: Returns the size of a `long int`.
    - `%zu` is used to ensure the output is platform-independent, as `size_t` may vary based on system architecture.

    Version History:
        Version 1.0 - [Date: 07-NOV-2024] - Initial version to demonstrate the `sizeof` operator 
        with various integer data types.

    Note:
    This program helps understand the different memory sizes associated with each integer data type 
    in C. Sizes may vary depending on the system architecture (e.g., 32-bit vs. 64-bit).

*/

#include <stdio.h>

int main() {
    // Demonstrating `sizeof` with various integer data types

    printf("Size of signed short int.........: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned short int.......: %zu bytes\n", sizeof(unsigned short int));

    printf("Size of signed int...............: %zu bytes\n", sizeof(int));
    printf("Size of unsigned int.............: %zu bytes\n", sizeof(unsigned int));
    
    printf("Size of signed long int..........: %zu bytes\n", sizeof(long int));
    printf("Size of unsigned long int........: %zu bytes\n", sizeof(unsigned long int));

    printf("Size of signed long long int.....: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int...: %zu bytes\n", sizeof(unsigned long long int));

    return 0;
}

// The output of the above program is shown as below:
/* 
Size of signed short int.........: 2 bytes
Size of unsigned short int.......: 2 bytes
Size of signed int...............: 4 bytes
Size of unsigned int.............: 4 bytes
Size of signed long int..........: 8 bytes
Size of unsigned long int........: 8 bytes
Size of signed long long int.....: 8 bytes
Size of unsigned long long int...: 8 bytes
*/
