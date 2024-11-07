/*
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 7, 2024

    Purpose:
    This program demonstrates the use of the `sizeof` operator with the 
    recommended format specifier `%zu` to display the size of data types in C. 
    It also includes an example with `%lu` to explain portability issues.

    Description:
    The program shows how to use the `sizeof` operator with `size_t` to display 
    the size of an integer data type. Using `%zu` ensures compatibility across 
    different platforms, while `%lu` may not be portable on all systems.

    Explanation:
    - `size_t` is an unsigned integer type used for representing the size of objects.
    - `%zu` is the correct format specifier for `size_t`, ensuring portability.
    - `%lu` may not correctly represent `size_t` on all systems, potentially 
      leading to warnings or incorrect output.

    Version History:
        Version 1.0 - [Date: 07-NOV-2024] - Initial version to demonstrate 
        the correct use of format specifiers with `sizeof` in C.

    Note:
    You can test this program on different platforms to see that `%zu` provides 
    consistent output, while `%lu` might not.

*/

#include <stdio.h>

int main() {
    // Declaring size_t variable to store the size of int
    size_t size = sizeof(int);

    // Using the correct format specifier %zu for size_t
    printf("Size of int using %%zu: %zu bytes\n", size);  // Safe and portable

    // Using %lu, which may not be portable on all platforms
    printf("Size of int using %%lu: %lu bytes\n", (unsigned long) size); // Potentially not portable

    return 0;
}

// The ouput of the above program is shown as below:
/*
Size of int using %zu: 4 bytes
Size of int using %lu: 4 bytes
*/
