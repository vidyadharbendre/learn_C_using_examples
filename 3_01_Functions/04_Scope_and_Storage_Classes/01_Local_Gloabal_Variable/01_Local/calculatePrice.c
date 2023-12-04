/*  
Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Date    : 4th December, 2023

Purpose : Real-time example demonstrating Local Variables:

Description:
- This program demonstrates the use of local variables in C.
- It includes a function calculateTotalPrice that calculates the total price of items in a shopping cart.
- The prices of individual items are considered as local variables within the function.

Explanation:
- The main() function initializes the prices of two items and calculates the total using the calculateTotalPrice function.
- calculateTotalPrice() function takes two float parameters and returns the sum of those values.

*/

#include <stdio.h>

// Function prototype for calculateTotalPrice - Declaration
float calculateTotalPrice(float fitem1Price, float fitem2Price);

int main() {
    float item1 = 20.0;
    float item2 = 30.0;

    // Declaration of 'total' variable to store the total price
    float total; 
    
    // Calculate total price using calculateTotalPrice function
    total = calculateTotalPrice(item1, item2); 

    // Display the total price
    printf("Total Price: %.2f\n", total); 

    // 'totalPrice' is not accessible here as it's a local variable within the function
    return 0;
}

// Function definition for calculateTotalPrice
float calculateTotalPrice(float fitem1Price, float fitem2Price) {
    // Declaration of 'ftotalPrice' variable to calculate total price
    float ftotalPrice; 
    // Calculation of total price
    ftotalPrice = fitem1Price + fitem2Price; 
    // Return the calculated total price
    return ftotalPrice; 
}

// The output of the above program is shown below:

/*  
Total Price: 50.00
*/