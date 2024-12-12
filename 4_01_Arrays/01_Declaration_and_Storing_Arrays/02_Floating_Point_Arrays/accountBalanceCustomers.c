/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of a float array representing bank balances

    Description:
    This program demonstrates the creation, initialization, and access of elements in a float array representing bank balances. 
    The array is declared with a maximum size to accommodate potential future growth. 
    However, only a few initial bank balances are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `float bankBalances[MAX_CUSTOMERS] = {1000.50, 2500.75, 500.0, 30000.25};` declares a float array named `bankBalances` with a maximum size of `MAX_CUSTOMERS` and initializes the first four elements with bank balances.
    2. **Access and Print Bank Balances:**
        - A `for` loop iterates through the array and prints the bank balance for each customer, formatted with two decimal places.

    **Key Point:**
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of customers and use it in the loop condition.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    bank_balances = [1000.50, 2500.75, 500.0, 30000.25]

    for i, balance in enumerate(bank_balances):
        print(f"Customer {i+1} Balance: ₹{balance:.2f}")
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"

    **To type the rupee symbol (₹):**
    - **Windows:**
        - **Numeric Keypad:** Press and hold the Alt key, type 158 on the numeric keypad, and release the Alt key.
    - **Mac:**
        - Use the "Option" key and the "i" key combination to insert the rupee symbol.
*/

#include <stdio.h>

#define MAX_CUSTOMERS 100

int main() {
    float bankBalances[MAX_CUSTOMERS] = {1000.50, 2500.75, 500.0, 30000.25};
    int numCustomers = 4; // Actual number of customers

    // Accessing and printing bank balances
    printf("Bank Balances of Customers:\n");
    for (int i = 0; i < numCustomers; ++i) {
        printf("Customer %d Balance: ₹%.2f\n", i + 1, bankBalances[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Bank Balances of Customers:
Customer 1 Balance: ₹1000.50
Customer 2 Balance: ₹2500.75
Customer 3 Balance: ₹500.00
Customer 4 Balance: ₹30000.25
*/

