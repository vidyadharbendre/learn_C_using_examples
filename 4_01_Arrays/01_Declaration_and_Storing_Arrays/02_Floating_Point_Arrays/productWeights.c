#include <stdio.h>

#define MAX_PRODUCTS 10 // Maximum number of products

int main() {
    float productWeights[MAX_PRODUCTS] = {0.5, 1.2, 2.0, 1.5, 3.3}; // Example product weights
    
    // Accessing and printing product weights
    printf("Weights of Different Products:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Product %d Weight: %.1f kg\n", i + 1, productWeights[i]);
    }

    return 0;
}
// The output of the above program is shown as below:
/*
Weights of Different Products:
Product 1 Weight: 0.5 kg
Product 2 Weight: 1.2 kg
Product 3 Weight: 2.0 kg
Product 4 Weight: 1.5 kg
Product 5 Weight: 3.3 kg
*/