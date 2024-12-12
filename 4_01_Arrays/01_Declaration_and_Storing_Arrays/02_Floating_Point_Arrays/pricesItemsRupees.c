/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of a float array representing item prices

    Description:
    This program demonstrates the creation, initialization, and access of elements in a float array representing item prices. 
    The array is declared with a maximum size to accommodate potential future items. 
    However, only a few initial item prices are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `float prices[MAX_ITEMS] = {12.99, 9.75, 5.50, 24.99, 15.49};` declares a float array named `prices` with a maximum size of `MAX_ITEMS` and initializes the first five elements with item prices.
    2. **Access and Print Prices:**
        - A `for` loop iterates through the array and prints the price for each item, formatted with two decimal places and prefixed with the rupee symbol (`₹`) using a Unicode escape sequence.

    Key Point:
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of items and use it in the loop condition.

    Python Equivalent:
    Python uses lists to represent arrays:
    ```python
    prices = [12.99, 9.75, 5.50, 24.99, 15.49]

    for i, price in enumerate(prices):
        print(f"Item {i+1} Price: ₹{price:.2f}")
    ```

    To visualize the execution step-by-step, you can use PythonTutor:
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_ITEMS 20

int main() {
    float prices[MAX_ITEMS] = {12.99, 9.75, 5.50, 24.99, 15.49};
    int numItems = 5; // Actual number of items

    printf("Prices of Items in the Shopping Cart:\n");
    for (int i = 0; i < numItems; ++i) {
        printf("Item %d Price: \u20B9%.2f\n", i + 1, prices[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Prices of Items in the Shopping Cart:
Item 1 Price: ₹12.99
Item 2 Price: ₹9.75
Item 3 Price: ₹5.50
Item 4 Price: ₹24.99
Item 5 Price: ₹15.49
*/