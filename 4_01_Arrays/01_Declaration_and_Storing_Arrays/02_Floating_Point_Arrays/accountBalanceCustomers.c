#include <stdio.h>

#define MAX_CUSTOMERS 100 // Maximum number of customers

int main() {
    float bankBalances[MAX_CUSTOMERS] = {1000.50, 2500.75, 500.0, 30000.25}; 
    // Example account balances
    
    // Accessing and printing bank account balances
    printf("Bank Balances of Customers:\n");
    for (int i = 0; i < 20; ++i) {
        printf("Customer %d Balance: $%.2f\n", i + 1, bankBalances[i]);
    }

    return 0;
}

//The output of the above program is shown as below:
/* .  
Bank Balances of Customers:
Customer 1 Balance: $1000.50
Customer 2 Balance: $2500.75
Customer 3 Balance: $500.00
Customer 4 Balance: $30000.25
Customer 5 Balance: $0.00
Customer 6 Balance: $0.00
Customer 7 Balance: $0.00
Customer 8 Balance: $0.00
Customer 9 Balance: $0.00
Customer 10 Balance: $0.00
Customer 11 Balance: $0.00
Customer 12 Balance: $0.00
Customer 13 Balance: $0.00
Customer 14 Balance: $0.00
Customer 15 Balance: $0.00
Customer 16 Balance: $0.00
Customer 17 Balance: $0.00
Customer 18 Balance: $0.00
Customer 19 Balance: $0.00
Customer 20 Balance: $0.00
*/
