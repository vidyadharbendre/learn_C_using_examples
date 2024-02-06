#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    int numProducts;

    printf("Enter the number of products: ");
    scanf("%d", &numProducts);

    struct Product *products = (struct Product *)malloc(numProducts * sizeof(struct Product));
    for (int i = 0; i < numProducts; i++) {
        printf("Enter name of product %d: ", i + 1);
        scanf("%s", products[i].name);

        printf("Enter price of product %d: ", i + 1);
        scanf("%f", &products[i].price);

        printf("Enter quantity of product %d: ", i + 1);
        scanf("%d", &products[i].quantity);
    }

    // Display product details
    printf("\nProduct Details:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Name: %s, Price: %.2f, Quantity: %d\n", products[i].name, products[i].price, products[i].quantity);
    }

    // Free allocated memory
    free(products);

    return 0;
}
