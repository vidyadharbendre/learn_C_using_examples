/*  Program Name: IntTotalMoney.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: In this example, we have declared an int variable named totalMoney, which represents the total amount of money in a bank account. The value assigned is ten lakhs rupees (one million dollars). This value is larger than what can be represented by an unsigned int. When we use the %d format specifier in the printf statement, it tells the program to print an integer, matching the data type of the totalMoney variable. The output will display the total amount of money in the bank as an integer.

*/

#include <stdio.h>

int main() {
    // Declare an integer variable named 'totalMoney' and assign a value of 1,000,000 (representing rupees).
    int totalMoney = 1000000; // An example total amount of money in rupees

    // Use the \u escape sequence to represent the Unicode for the rupee symbol (₹) in the printf statement.
    printf("The total amount of money in the bank is \u20B9%d.\n", totalMoney);

    // Return 0 to indicate successful program execution.
    return 0;
}
