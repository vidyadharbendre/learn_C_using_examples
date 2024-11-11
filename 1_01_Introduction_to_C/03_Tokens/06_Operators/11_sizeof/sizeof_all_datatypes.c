#include <stdio.h>

/*
    Program to display the size (in bytes) of various data types in C.
    
    Author: 
    Vidyadhar Bendre
    
    Date: 
    November 11, 2024
    
    Purpose:
    This program demonstrates the use of `sizeof` to determine the memory size of 
    various C data types, using different format specifiers to match each data type.

    Explanation:
    - `sizeof(type)`: Returns the size in bytes of the specified type.
    - Format specifiers like `%d`, `%u`, `%ld`, etc., are chosen to ensure compatibility 
      with the respective data type's size value, using explicit casting where needed.
*/

int main() {
    // Displaying the size of various data types in bytes
    printf("Size of int....................: %d bytes\n", (int)sizeof(int));
    printf("Size of unsigned int...........: %u bytes\n", (unsigned int)sizeof(unsigned int));
    printf("Size of short int..............: %hd bytes\n", (short)sizeof(short int));
    printf("Size of long int...............: %ld bytes\n", (long)sizeof(long int));
    printf("Size of unsigned long int......: %lu bytes\n", (unsigned long)sizeof(unsigned long int));
    printf("Size of float..................: %f bytes\n", (float)sizeof(float));
    printf("Size of double.................: %lf bytes\n", (double)sizeof(double));
    printf("Size of long double............: %Lf bytes\n", (long double)sizeof(long double));
    printf("Size of char...................: %d bytes\n", (int)sizeof(char));

    return 0;
}

// The output of the above program is shown as below:
/*
Size of int....................: 4 bytes
Size of unsigned int...........: 4 bytes
Size of short int..............: 2 bytes
Size of long int...............: 8 bytes
Size of unsigned long int......: 8 bytes
Size of float..................: 4.000000 bytes
Size of double.................: 8.000000 bytes
Size of long double............: 8.000000 bytes
Size of char...................: 1 bytes
*/