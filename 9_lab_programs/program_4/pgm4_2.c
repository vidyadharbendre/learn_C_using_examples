#include <stdio.h>

// Function prototypes
float calculate_car_wash();
float calculate_oil_top_up(float current_oil_level);
void display_total(float grand_total);

int main() {
    float current_oil_level, car_wash_total, oil_total, grand_total;

    // Prompt user for current oil level
    printf("Enter the current oil level in ml: ");
    scanf("%f", &current_oil_level);

    // Calculate the totals
    car_wash_total = calculate_car_wash();
    oil_total = calculate_oil_top_up(current_oil_level);
    grand_total = car_wash_total + oil_total;

    // Display the total
    display_total(grand_total);

    return 0;
}

// Function to calculate car wash charges with tax
float calculate_car_wash() {
    const float CAR_WASH_CHARGE = 500.0;
    const float CAR_WASH_TAX = 0.10;
    return CAR_WASH_CHARGE + (CAR_WASH_CHARGE * CAR_WASH_TAX);
}

// Function to calculate oil top-up charges with tax
float calculate_oil_top_up(float current_oil_level) {
    const float OIL_COST_PER_ML = 5.0;
    const float OIL_TAX = 0.125;
    float oil_top_up_needed = 0.0;

    if (current_oil_level < 300.0) {
        oil_top_up_needed = 300.0 - current_oil_level;
    }

    float oil_cost = oil_top_up_needed * OIL_COST_PER_ML;
    return oil_cost + (oil_cost * OIL_TAX);
}

// Function to display the total amount
void display_total(float grand_total) {
    printf("Total amount to be paid: %+010.7f\n", grand_total);
}
