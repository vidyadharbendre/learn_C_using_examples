/*  
Author     : 
Vidyadhar Bendre

Date       : 
4th December, 2023

Email      : 
vidyadhar.bendre@gmail.com

Purpose    : 
Demonstration of Register Storage Class in C

Description:
The register storage class in C is used to suggest to the compiler that a particular local variable should be stored in a CPU register for faster access. However, modern compilers might optimize code independently, and they may choose to ignore the register keyword when allocating variables to registers.

A real-world analogy to illustrate the register storage class could be the concept of express checkout lanes in a supermarket.

Explanation:
In this analogy, the checkout() function represents the checkout process. The register int cash variable in the checkout() function is analogous to an express checkout lane, optimized for faster access, possibly stored in a register for quicker calculations.

When customers use the express checkout lane (checkout() function with fewer items), the cash variable (representing the total amount) gets processed more quickly due to its register-like storage.

However, it's essential to note that the actual use of the register keyword might not always force a variable into a register as compilers often optimize code based on their algorithms and the hardware architecture.

This analogy simply illustrates the concept of preferring faster access for certain variables, similar to how express checkout lanes prioritize faster service for customers with fewer items in a supermarket.
*/

#include <stdio.h>

void checkout(int items);

int main() {
    // Customer 1 with fewer items prefers the express checkout:
    checkout(3); // Customer 1 purchases 3 items

    // Customer 2 with more items goes to a regular lane:
    checkout(10); // Customer 2 purchases 10 items

    return 0;
}

void checkout(int items) {
    register int cash = 0; // Assume 'cash' as a register for faster access
    cash += items * 10; // Each item costs 10 Rupees

    printf("Total cash in express lane: \u20B9 %d\n", cash);
}

// The output of the above program is shown below:
/*

Total cash in express lane: ₹ 30
Total cash in express lane: ₹ 100

*/
