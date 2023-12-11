/* 

    Program Name: IntTotalMoney.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: 
    In this example, we have declared an int variable named totalMoney, which represents the total amount of money in a bank account. This program demonstrates the usage of scanf to accept the total amount of money from the user and printf to display the entered value.

*/

#include <stdio.h>

int main() {
    // Declare an integer variable named 'totalMoney'.
    int totalMoney;

    // Prompt the user to enter the total amount of money in the bank.
    printf("Please enter the total amount of money in the bank (in rupees)...: ");
    scanf("%d", &totalMoney);

    // Use the \u escape sequence to represent the Unicode for the rupee symbol (₹) in the printf statement.
    printf("The total amount of money in the bank is ........................:\u20B9%d.\n", totalMoney);

    // Return 0 to indicate successful program execution.
    return 0;
}

// The output of the above program as shown below
/* .  

Please enter the total amount of money in the bank (in rupees)...: 10000000
The total amount of money in the bank is ........................:₹10000000.

*/