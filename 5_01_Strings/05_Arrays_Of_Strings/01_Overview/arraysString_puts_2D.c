#include <stdio.h>   // Include standard input-output library

/*
Author: Vidyadhar Bendre
Date: 2 January 2025
email: vidyadhar.bendre@gmail.com
Purpose: Demonstrate the use of a loop to access and print an array of strings in C using `puts`.

Description:
- This program initializes an array of strings with predefined values.
- It calculates the number of rows in the array dynamically using `sizeof`.
- A loop is used to iterate through the rows and print each string using `puts`.

Note:
- `sizeof` is used to calculate the total size of the array and the size of one row to determine the number of rows.
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

    // Calculate the number of rows in the array
    int rows = sizeof(strings) / sizeof(strings[0]);

    // Print header message
    printf("Accessing elements of the array of strings using a loop and puts:\n");

    // Loop through each row and print the string using puts
    for (int i = 0; i < rows; i++) {
        puts(strings[i]); // Print the string in the current row
    }

    return 0;  // Indicate successful program execution
}

/*
The output of the above program is as follows:
Accessing elements of the array of strings using a loop and puts:
Hello
World
Programming
In
C
*/
