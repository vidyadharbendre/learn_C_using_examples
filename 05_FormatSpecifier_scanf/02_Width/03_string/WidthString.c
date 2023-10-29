/*

    Author  : Vidyadhar Bendre

    Email   : vidyadhar.bendre@gmail.com

    Purpose:
        This C program illustrates the formatting of strings using the printf function. It demonstrates how to control the width of string output using width specifiers.

    Description:
        1. Displaying a string with the default width.
        2. Displaying a string with a width of 19 characters.
        3. Displaying a string with a width of 15 characters.

*/

#include <stdio.h>

int main() {
    char text[] = "Hello, World!";



    printf("1 - String with default width............:%s\n", text);
    printf("2 - String with width of 19 characters...:%19s\n", text);
    printf("3 - String with width of 15 characters...:%15s\n", text);
    
    return 0;
}

// The output of the above program as follows

/*    

1 - String with default width............:Hello, World!
2 - String with width of 19 characters...:      Hello, World!
3 - String with width of 15 characters...:  Hello, World!

*/
