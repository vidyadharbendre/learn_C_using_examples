/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of a float array representing product weights

    Description:
    This program demonstrates the creation, initialization, and access of elements in a float array representing product weights. 
    The array is declared with a maximum size to accommodate potential future products. 
    However, only a few initial product weights are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `float productWeights[MAX_PRODUCTS] = {0.5, 1.2, 2.0, 1.5, 3.3};` declares a float array named `productWeights` with a maximum size of `MAX_PRODUCTS` and initializes the first five elements with product weights.
    2. **Access and Print Weights:**
        - A `for` loop iterates through the array and prints the weight for each product, formatted with one decimal place.

    **Key Point:**
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of products and use it in the loop condition.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    product_weights = [0.5, 1.2, 2.0, 1.5, 3.3]

    for i, weight in enumerate(product_weights):
        print(f"Product {i+1} Weight: {weight:.1f} kg")
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_PRODUCTS 10

int main() {
    float productWeights[MAX_PRODUCTS] = {0.5, 1.2, 2.0, 1.5, 3.3};
    int numProducts = 5; // Actual number of products

    // Accessing and printing product weights
    printf("Weights of Different Products:\n");
    for (int i = 0; i < numProducts; ++i) {
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