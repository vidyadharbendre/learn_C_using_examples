#include <stdio.h>

#define MAX_ITEMS 20 // Maximum number of stock items

int main() {
    int stockQuantities[MAX_ITEMS] = {100, 50, 200, 75, 120}; // Example stock quantities
    
    // Accessing and printing stock quantities
    printf("Stock Quantities:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Item %d Quantity: %d\n", i + 1, stockQuantities[i]);
    }

    return 0;
}

/*
Stock Quantities:
Item 1 Quantity: 100
Item 2 Quantity: 50
Item 3 Quantity: 200
Item 4 Quantity: 75
Item 5 Quantity: 120
*/