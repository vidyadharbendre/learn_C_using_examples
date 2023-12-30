/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
30 December 2023

Purpose:
The purpose of this C program is to demonstrate how strings are represented in memory by displaying each character of the string "HELLO" along with its memory address. Additionally, it illustrates the null terminator character ('\0') used to signify the end of the string in C.

Explanation:
This C program achieves its purpose through the following steps:

String Declaration: It begins by declaring a string variable myString[] initialized with the value "HELLO".

Printing Characters and Addresses: The program enters a loop to iterate through each character of the string. Inside the loop:

It prints the index, memory address, and value of each character using printf.
The loop runs until it encounters the null terminator '\0', which marks the end of the string.
Printing Null Terminator: After the loop, the program explicitly prints the memory address and the null terminator character '\0' to signify the end of the string.

Output Explanation:
The output provided in the comment section demonstrates the program's output, displaying the index, memory address, and value of each character in the string "HELLO", along with the memory address and the null terminator to illustrate the string's representation in memory.

The index represents the position of each character in the string, the address shows the memory location where each character is stored, and the value denotes the character itself. The null terminator is depicted by an empty space as it does not have a visible character representation but marks the end of the string.

This program effectively showcases how strings are stored in memory as an array of characters, demonstrating their sequential storage and the use of a null terminator to terminate the string.

*/

#include <stdio.h>

int main() {
    // Declare a string
    char myString[] = "HELLO";

    // Print each character and its memory address
    printf("Index   Address   Value\n");
    for (int i = 0; myString[i] != '\0'; ++i) {
        printf("%d       %p   '%c'\n", i, &myString[i], myString[i]);
    }
    
    // Print the null terminator
    printf("5       %p   '%c' (null terminator)\n", &myString[5], myString[5]);

    return 0;
}

// The output of the above program is shown as below:
/*
Index   Address   Value
0       0x16b4de724   'H'
1       0x16b4de725   'E'
2       0x16b4de726   'L'
3       0x16b4de727   'L'
4       0x16b4de728   'O'
5       0x16b4de729   '' (null terminator)
*/