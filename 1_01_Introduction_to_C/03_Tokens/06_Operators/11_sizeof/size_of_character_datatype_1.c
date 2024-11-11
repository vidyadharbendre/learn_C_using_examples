/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 7, 2024

    Purpose:
    This program demonstrates the use of the `sizeof` operator to determine the memory size 
    of various character data types in C.

    Description:
    The program displays the memory size in bytes for different character data types 
    (`char`, `signed char`, and `unsigned char`) using the `sizeof` operator. 
    `%lu` is used as the format specifier after casting `sizeof` results to `unsigned long`.

    Explanation:
    - `sizeof(char)`: Returns the size of a `char` in bytes.
    - `sizeof(signed char)`: Returns the size of a `signed char`.
    - `sizeof(unsigned char)`: Returns the size of an `unsigned char`.
    - `%lu` is used to print `unsigned long` values after casting the result of `sizeof`.

    Version History:
        Version 1.2 - [Date: 07-NOV-2024] - Modified version to demonstrate `sizeof` 
        with character data types using `%lu` as the format specifier.

    Note:
    This program helps understand the memory sizes associated with each character data type 
    in C, which are typically 1 byte but may vary on some platforms.

*/

#include <stdio.h>

int main() {
    // Demonstrating `sizeof` with various character data types

    printf("Size of char.....................: %lu bytes\n", (unsigned long)sizeof(char));
    printf("Size of signed char..............: %lu bytes\n", (unsigned long)sizeof(signed char));
    printf("Size of unsigned char............: %lu bytes\n", (unsigned long)sizeof(unsigned char));

    return 0;
}
// The output of the above program is shown as below:
/*
Size of char.....................: 1 bytes
Size of signed char..............: 1 bytes
Size of unsigned char............: 1 bytes
*/