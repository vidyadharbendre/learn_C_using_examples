/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 7, 2024

    Purpose:
    This program demonstrates the use of the `sizeof` operator to determine the memory size 
    of various floating-point and character data types in C.

    Description:
    The program displays the memory size in bytes for different floating-point data types 
    (`float`, `double`, `long double`) and character data types (`char`) using the `sizeof` operator. 
    The `%zu` format specifier is used to print `size_t` values for portability across platforms.

    Explanation:
    - `sizeof(float)`: Returns the size of a `float` in bytes on the current platform.
    - `sizeof(double)`: Returns the size of a `double`.
    - `sizeof(long double)`: Returns the size of a `long double`.
    - `sizeof(char)`: Returns the size of a `char`.
    - `%zu` ensures compatibility across different architectures.

    Version History:
        Version 1.0 - [Date: 07-NOV-2024] - Initial version to demonstrate `sizeof` for floating-point and character data types.

    Note:
    This program is useful for understanding the memory usage of different floating-point 
    and character data types in C, which may vary by system architecture.

*/

#include <stdio.h>

int main() {
    // Demonstrating `sizeof` with floating-point data types
    printf("Size of float...........: %zu bytes\n", sizeof(float));
    printf("Size of double..........: %zu bytes\n", sizeof(double));
    printf("Size of long double.....: %zu bytes\n", sizeof(long double));

    // Demonstrating `sizeof` with character data types
    printf("Size of char............: %zu bytes\n", sizeof(char));
    printf("Size of unsigned char...: %zu bytes\n", sizeof(unsigned char));
    printf("Size of signed char.....: %zu bytes\n", sizeof(signed char));

    return 0;
}

/* 
   Expected Output (based on typical platforms):
   
   Size of float: 4 bytes              (typically 4 bytes on most systems)
   Size of double: 8 bytes             (typically 8 bytes on most systems)
   Size of long double: 16 bytes       (varies by system, commonly 16 bytes on 64-bit)
   
   Size of char: 1 byte                (typically 1 byte)
   Size of unsigned char: 1 byte       (typically 1 byte)
   Size of signed char: 1 byte         (typically 1 byte)

   Note: Sizes may vary depending on the system architecture (32-bit vs. 64-bit) 
         and the specific compiler.
*/
