#include <stdio.h>

/*
    Program to display the size (in bytes) of various data types in C.
    
    Author: 
    Vidyadhar Bendre
    
    Date: 
    November 11, 2024
    
    Purpose:
    This program demonstrates the use of `sizeof` to determine the memory size of 
    various C data types, storing the sizes in variables for clarity and using 
    different format specifiers to match each data type.

    Explanation:
    - `sizeof(type)`: Returns the size in bytes of the specified type.
    - Sizes are stored in variables explicitly cast to the appropriate type.
    - Format specifiers like `%d`, `%u`, `%ld`, etc., are chosen for compatibility.

    Notes:
    - Separate variables make it easier to reuse or manipulate size information.
*/

int main() {
    // Declare variables to hold the sizes of each data type
    int size_int = (int)sizeof(int);
    size_t size_t_int = sizeof(int);
    unsigned int size_unsigned_int = (unsigned int)sizeof(unsigned int);
    short size_short_int = (short)sizeof(short int);
    long size_long_int = (long)sizeof(long int);
    unsigned long size_unsigned_long_int = (unsigned long)sizeof(unsigned long int);
    float size_float = (float)sizeof(float);
    double size_double = (double)sizeof(double);
    long double size_long_double = (long double)sizeof(long double);
    char size_char = (int)sizeof(char);

    // Display the sizes using printf
    printf("Size of int....................: %d bytes\n", size_int);
    printf("Size of int with size_t........: %zu bytes\n", size_t_int);
    printf("Size of unsigned int...........: %u bytes\n", size_unsigned_int);
    printf("Size of short int..............: %hd bytes\n", size_short_int);
    printf("Size of long int...............: %ld bytes\n", size_long_int);
    printf("Size of unsigned long int......: %lu bytes\n", size_unsigned_long_int);
    printf("Size of float..................: %f bytes\n", size_float);
    printf("Size of double.................: %lf bytes\n", size_double);
    printf("Size of long double............: %Lf bytes\n", size_long_double);
    printf("Size of char...................: %d bytes\n", size_char);

    return 0;
}

// Example Output:
/*
Size of int....................: 4 bytes
Size of int with size_t........: 4 bytes
Size of unsigned int...........: 4 bytes
Size of short int..............: 2 bytes
Size of long int...............: 8 bytes
Size of unsigned long int......: 8 bytes
Size of float..................: 4.000000 bytes
Size of double.................: 8.000000 bytes
Size of long double............: 8.000000 bytes
Size of char...................: 1 bytes
*/
