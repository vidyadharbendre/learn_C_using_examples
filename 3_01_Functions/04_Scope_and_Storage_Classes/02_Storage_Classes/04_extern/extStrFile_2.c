/*  
Author     : Vidyadhar Bendre
Date       : 4th December, 2023
Email      : vidyadhar.bendre@gmail.com

Purpose    : Demonstrating extern in C

Description:
This code demonstrates the use of the extern keyword in C. It accesses the 'count' variable from extStrFile_1.c using the extern keyword.
*/

#include <stdio.h>

extern int count; // Declare 'count' as an external variable

int main() {
    // 'count' from extStrFile_1.c is accessed here
    printf("Value of count from extStrFile_2.c: %d\n", count);
    return 0;
}

// How to compile these files together!

/*  

gcc extStrFile_1.c extStrFile_2.c -o output

./output 

*/

// The output of the above program is shown as below:
/*

Value of count from extStrFile_2.c: 5

*/