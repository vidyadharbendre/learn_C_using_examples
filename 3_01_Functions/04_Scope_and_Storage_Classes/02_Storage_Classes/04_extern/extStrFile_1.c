/*  
Author     : Vidyadhar Bendre
Date       : 4th December, 2023
Email      : vidyadhar.bendre@gmail.com

Purpose    : Demonstrating extern in C

Description:
This code demonstrates the use of the extern keyword in C. The integer variable 'count' is defined as a global variable in this file.
*/

#include <stdio.h>

int count = 5; // Define 'count' as a global variable

void display() {
    printf("Value of count from extStrFile_1.c: %d\n", count);
}
