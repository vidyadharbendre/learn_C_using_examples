/*
    Program Name: CarServicingChargesWithFunctions.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    This program calculates the total charges for car servicing, broken down into:
      1. Car wash charges, including a base charge and 10% tax.
      2. Oil top-up charges, calculated based on the required top-up to reach 300 ml, 
         with a base cost of Rs. 5 per ml and a 12.5% tax. 
    The program uses modular functions to calculate car wash charges, oil top-up charges, 
    and display the final total. The output is formatted to display 17 characters, including 
    7 decimal places, padded with zeros, and signed (+/-).

    This program demonstrates the use of modular functions, constants, and formatted output 
    in C, providing clean and maintainable code.
*/

#include <stdio.h>

// Function prototypes
float calculate_car_wash();
float calculate_oil_top_up(float current_oil_level);
void display_total(float grand_total);

int main() {
    /*
        Description:
        The main function orchestrates the car servicing charge calculation.
        It:
        1. Prompts the user for the current oil level.
        2. Calculates car wash charges using calculate_car_wash.
        3. Calculates oil top-up charges using calculate_oil_top_up.
        4. Computes the total amount to be paid.
        5. Displays the grand total using display_total.
    */
    
    // Variable declarations
    float current_oil_level; // Input: Current oil level in ml
    float car_wash_total;    // Output: Total cost of car wash
    float oil_total;         // Output: Total cost of oil top-up
    float grand_total;       // Output: Total amount to be paid

    // Prompt user for the current oil level in ml
    printf("Enter the current oil level in ml: ");
    scanf("%f", &current_oil_level);

    // Calculate the totals using modular functions
    car_wash_total = calculate_car_wash();          // Calculate car wash charges
    oil_total = calculate_oil_top_up(current_oil_level); // Calculate oil top-up charges
    grand_total = car_wash_total + oil_total;       // Compute the grand total

    // Display the grand total
    display_total(grand_total);

    // Return 0 to indicate successful program execution
    return 0;
}

/*
    Function: calculate_car_wash
    Description: 
        Calculates the total cost for a car wash, including a 10% tax.
    Returns:
        float: Total cost of car wash with tax.
*/
float calculate_car_wash() {
    /*
        Description:
        The function calculates the car wash charges by:
        1. Using a base charge of Rs. 500.0.
        2. Adding a 10% tax on the base charge.
    */
    const float CAR_WASH_CHARGE = 500.0; // Base cost of car wash
    const float CAR_WASH_TAX = 0.10;     // Tax rate for car wash
    return CAR_WASH_CHARGE + (CAR_WASH_CHARGE * CAR_WASH_TAX);
}

/*
    Function: calculate_oil_top_up
    Description:
        Calculates the total cost for oil top-up, including a 12.5% tax.
        If the current oil level is 300 ml or more, no top-up is required.
    Parameters:
        current_oil_level (float): The current oil level in ml.
    Returns:
        float: Total cost of the oil top-up with tax.
*/
float calculate_oil_top_up(float current_oil_level) {
    /*
        Description:
        The function calculates the oil top-up charges by:
        1. Checking if the current oil level is less than 300 ml.
        2. Calculating the top-up required to reach 300 ml.
        3. Using Rs. 5 per ml for the base cost of the top-up.
        4. Adding a 12.5% tax on the base cost.
    */
    const float OIL_COST_PER_ML = 5.0;  // Cost per ml of oil in Rs.
    const float OIL_TAX = 0.125;        // Tax rate for oil
    float oil_top_up_needed = 0.0;      // Amount of oil needed for top-up

    // Calculate top-up quantity if current oil level is less than 300 ml
    if (current_oil_level < 300.0) {
        oil_top_up_needed = 300.0 - current_oil_level;
    }

    // Calculate base cost and add tax
    float oil_cost = oil_top_up_needed * OIL_COST_PER_ML;
    return oil_cost + (oil_cost * OIL_TAX);
}

/*
    Function: display_total
    Description:
        Displays the grand total amount to be paid, formatted to 17 characters,
        with 7 decimal places, signed (+/-), and padded with zeros.
    Parameters:
        grand_total (float): The final total amount to be paid.
    Returns:
        void
*/
void display_total(float grand_total) {
    /*
        Description:
        The function displays the total amount formatted to:
        - A width of 17 characters,
        - 7 decimal places,
        - A signed value (+ or -),
        - Zeros padded to fill the width.
    */
    printf("Total amount to be paid: %+010.7f\n", grand_total);
}

/*
vidyadharbendre@Vidyadhars-MacBook-Pro program_4 % ./pgm4_2
Enter the current oil level in ml: 250
Total amount to be paid: +831.2500000
vidyadharbendre@Vidyadhars-MacBook-Pro program_4 % ./pgm4_2
Enter the current oil level in ml: 300
Total amount to be paid: +550.0000000
vidyadharbendre@Vidyadhars-MacBook-Pro program_4 % ./pgm4_2
Enter the current oil level in ml: 100
Total amount to be paid: +1675.0000000
*/
