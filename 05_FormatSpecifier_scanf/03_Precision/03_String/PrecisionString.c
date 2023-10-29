/*

Author  : Vidyadhar Bendre

Email   : vidyadhar.bendre@gmail.com

Purpose :

    This program illustrates the use of format specifiers for controlling the precision and formatting of strings.
    It prints a string with default precision and with a specified precision.

*/

#include <stdio.h>

int main() {
    char text[] = "Hello, World!";

    printf("1 - String with default precision...: %s\n", text);
    printf("2 - String with precision of 5......: %.5s\n", text);
    
    return 0;
}


// The output of the program as shown below

/* .   

1 - String with default precision...: Hello, World!
2 - String with precision of 5......: Hello

*/