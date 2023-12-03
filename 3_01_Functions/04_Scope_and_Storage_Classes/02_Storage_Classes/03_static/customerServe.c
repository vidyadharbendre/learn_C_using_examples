// This is to depict the real-time scenario:

/* . 

Purpose:
here's a real-world analogy to explain the static storage class:

Let's consider a scenario of a retail store where the store manager needs to keep track of the number of customers served by each cashier throughout the day.

Description:
In this example, the static int customersServed variable within the serveCustomer() function is used to keep track of the number of customers served by each cashier. It retains its value between function calls, meaning it keeps track of customers individually for each cashier even though the function is called multiple times for different cashiers.

When the program runs, you'll notice that the customersServed count increments separately for each cashier, demonstrating how the static variable retains its value between function calls and serves as a persistent counter for individual cashiers, similar to how a static variable retains its value across function calls in a program.

pwd*/

#include <stdio.h>

void serveCustomer();

int main() {
    serveCustomer(); // Cashier 1 serving customers
    serveCustomer(); // Cashier 1 serving more customers
    serveCustomer(); // Cashier 1 serving additional customers

    // Imagine another cashier comes in:
    printf("\nAnother cashier starts...\n");
    serveCustomer(); // Cashier 2 serving customers
    serveCustomer(); // Cashier 2 serving more customers

    return 0;
}

void serveCustomer() {
    static int customersServed = 0; // Static variable to track customers served by each cashier
    customersServed++; // Increment the count for each customer served
    printf("Cashier served %d customers.\n", customersServed);
}

// The output of the above program is shown as below:

/* -

Cashier served 1 customers.
Cashier served 2 customers.
Cashier served 3 customers.

Another cashier starts...
Cashier served 4 customers.
Cashier served 5 customers.

*/