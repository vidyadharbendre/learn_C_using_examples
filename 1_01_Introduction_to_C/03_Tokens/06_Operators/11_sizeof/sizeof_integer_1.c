/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 11, 2024

    Purpose:
    This program demonstrates the use of the `sizeof` operator to determine the memory size 
    of various integer data types in C, including signed and unsigned variations.

    Description:
    The program displays the memory size in bytes for different integer data types 
    (signed, unsigned, short, and long) using the `sizeof` operator. The `%lu` 
    format specifier is used to print the `sizeof` values by casting them to `unsigned long`.

    Explanation:
    - `sizeof(int)`: Returns the size of an `int` in bytes on the current platform.
    - `sizeof(unsigned int)`: Returns the size of an unsigned `int`.
    - `sizeof(short)`: Returns the size of a `short int`.
    - `sizeof(long)`: Returns the size of a `long int`.
    - `%lu` is used to print `unsigned long` values after casting the result of `sizeof`.

    Version History:
        Version 1.1 - [Date: 07-NOV-2024] - Modified version to demonstrate `sizeof` 
        with various integer data types using `%lu` as the format specifier.

    Note:
    This program helps understand the different memory sizes associated with each integer data type 
    in C. Sizes may vary depending on the system architecture (e.g., 32-bit vs. 64-bit).

*/

#include <stdio.h>

int main() {
    // Demonstrating `sizeof` with various integer data types

    printf("Size of signed short int.........: %lu bytes\n", (unsigned long)sizeof(short int));
    printf("Size of unsigned short int.......: %lu bytes\n", (unsigned long)sizeof(unsigned short int));

    printf("Size of signed int...............: %lu bytes\n", (unsigned long)sizeof(int));
    printf("Size of unsigned int.............: %lu bytes\n", (unsigned long)sizeof(unsigned int));
    
    printf("Size of signed long int..........: %lu bytes\n", (unsigned long)sizeof(long int));
    printf("Size of unsigned long int........: %lu bytes\n", (unsigned long)sizeof(unsigned long int));

    printf("Size of signed long long int.....: %lu bytes\n", (unsigned long)sizeof(long long int));
    printf("Size of unsigned long long int...: %lu bytes\n", (unsigned long)sizeof(unsigned long long int));

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