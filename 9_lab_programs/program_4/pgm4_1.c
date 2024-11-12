#include <stdio.h>

int main() {
    // Variables for the charges and taxes
    const float CAR_WASH_CHARGE = 500.0;
    const float CAR_WASH_TAX = 0.10;

    const float OIL_COST_PER_ML = 5.0;
    const float OIL_TAX = 0.125;

    // Inputs for the current oil level and top-up quantity
    float current_oil_level, oil_top_up_needed;
    float car_wash_total, oil_total, grand_total;

    // Prompt user for current oil level
    printf("Enter the current oil level in ml: ");
    scanf("%f", &current_oil_level);

    // Calculate top-up needed to reach 300 ml
    if (current_oil_level < 300.0) {
        oil_top_up_needed = 300.0 - current_oil_level;
    } else {
        oil_top_up_needed = 0.0;
    }

    // Calculate car wash total with tax
    car_wash_total = CAR_WASH_CHARGE + (CAR_WASH_CHARGE * CAR_WASH_TAX);

    // Calculate oil top-up total with tax
    oil_total = oil_top_up_needed * OIL_COST_PER_ML;
    oil_total += oil_total * OIL_TAX;

    // Calculate grand total
    grand_total = car_wash_total + oil_total;

    // Display the total with 17 places (7 fractional, 10 integer, signed with 0-padding)
    printf("Total amount to be paid: %+010.7f\n", grand_total);

    return 0;
}
