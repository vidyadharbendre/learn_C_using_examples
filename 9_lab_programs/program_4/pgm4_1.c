/*
    Program Name: CarServicingCharges.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This C program calculates the total charges for car servicing at a service center. 
    The charges include:
      - A car wash service costing Rs. 500, with an additional 10% tax.
      - An oil top-up, if required, to ensure the engine has at least 300 ml of oil. 
        The cost of oil is Rs. 5 per ml, with an additional 12.5% tax. 
    The program prompts the user to input the current oil level, calculates the top-up quantity (if required), 
    and computes the total cost, including taxes. The output is displayed with 17 characters, including 7 fractional 
    places, and padded with zeros for formatting.

    This program demonstrates the use of constants, arithmetic operations, and formatted output in C.
*/

#include <stdio.h>

int main() {
    // Constants for the charges and taxes
/*    
    const float CAR_WASH_CHARGE = 500.0;  // Cost of car wash in Rs.
    const float CAR_WASH_TAX = 0.10;     // 10% tax on car wash

    const float OIL_COST_PER_ML = 5.0;   // Cost per ml of oil in Rs.
    const float OIL_TAX = 0.125;         // 12.5% tax on oil cost
*/
    // Variables for user input and calculations
    float current_oil_level;             // Current oil level in ml
    float oil_top_up_needed;             // Quantity of oil needed to top up
    float car_wash_total;                // Total cost of car wash (with tax)
    float oil_total;                     // Total cost of oil top-up (with tax)
    float grand_total;                   // Final total amount to be paid

    // Prompt user for current oil level in the engine
    printf("Enter the current oil level in ml: ");
    scanf("%f", &current_oil_level);
    // Calculate top-up required to reach 300 ml
    if (current_oil_level < 300.0) {
        oil_top_up_needed = 300.0 - current_oil_level;  // Calculate required top-up
    } else {
        oil_top_up_needed = 0.0;                       // No top-up needed
    }
    // Calculate car wash total with tax
    //car_wash_total = CAR_WASH_CHARGE + (CAR_WASH_CHARGE * CAR_WASH_TAX);
    car_wash_total = 500.0 + (500.0 * 0.10);

    // Calculate oil top-up total with tax
    oil_total = oil_top_up_needed * 5.0;   // Base cost of oil top-up
    oil_total += oil_total * 0.125;                 // Add 12.5% tax on oil cost
    // Calculate the grand total
    grand_total = car_wash_total + oil_total;
    // Display the total amount to be paid with specific formatting
    // Format: Signed value (+/-), 10 integer places, 7 fractional places, zero-padded
    printf("Total amount to be paid: %+010.7f\n", grand_total);
    // Return 0 to indicate successful program execution
    return 0;
}
// The output of the above program is shown below
/*
case 1:
Enter the current oil level in ml: 100
Total amount to be paid: +1675.0000000

case 2:
Enter the current oil level in ml: 300
Total amount to be paid: +550.0000000
case 3:
Enter the current oil level in ml: 400 
Total amount to be paid: +550.0000000
case 4:
Enter the current oil level in ml: 299
Total amount to be paid: +555.6250000
*/