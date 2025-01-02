#include <stdio.h>   // Include standard input-output library

/*
Author: Vidyadhar Bendre
Date: 2 January 2025
email: vidyadhar.bendre@gmail.com
Purpose: Demonstrate the declaration, initialization, and access of an array of strings in C.

Description:
- This program initializes an array of strings with predefined values.
- It demonstrates how to access and print individual strings from the array using their indices.

Note:
- Each string is stored as a character array, and the array of strings is essentially a 2D character array.
- You can visualize the execution step-by-step using [pythontutor.com](https://pythontutor.com).
*/

int main() {
    // Declaration and initialization of an array of strings
    char strings[][20] = {
        "Hello",        // strings[0]
        "World",        // strings[1]
        "Programming",  // strings[2]
        "In",           // strings[3]
        "C"             // strings[4]
    };

    // Accessing and printing elements of the array of strings
    printf("Accessing elements of the array of strings:\n");
    printf("%s\n", strings[0]); // Output: Hello
    printf("%s\n", strings[1]); // Output: World
    printf("%s\n", strings[2]); // Output: Programming
    printf("%s\n", strings[3]); // Output: In
    printf("%s\n", strings[4]); // Output: C

    return 0;  // Indicate successful program execution
}

// The output of the above program is shown as below:
/*
Hello
World
Programming
In
C
*/
