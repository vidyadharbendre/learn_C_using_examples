#include <stdio.h>

#define MAX_ITEMS 20 // Maximum number of items in the shopping cart

int main() {
    float prices[MAX_ITEMS] = {12.99, 9.75, 5.50, 24.99, 15.49}; // Example prices
    
    // Accessing and printing prices of items
    printf("Prices of Items in the Shopping Cart:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Item %d Price: \u20B9%.2f\n", i + 1, prices[i]);
    }

    return 0;
}
/* 
Prices of Items in the Shopping Cart:
Item 1 Price: ₹12.99
Item 2 Price: ₹9.75
Item 3 Price: ₹5.50
Item 4 Price: ₹24.99
Item 5 Price: ₹15.49
*/