#include <stdio.h>

// Definition of the Customer structure
struct Customer {
    int cust_id;           // Customer ID
    char name[50];         // Customer Name
    char address[100];     // Customer Address
    char phone_number[15]; // Customer Phone Number
    char dob[12];          // Customer Date of Birth
};

int main() {
    // Creating an instance of the Customer structure and assigning values directly
    struct Customer customer = {201, "Rajest Bendre", "123 Main Street, Pune", "+1234567890", "1990-05-15"};

    // Displaying information
    printf("Customer Information:\n");
    printf("Customer ID: %d\n", customer.cust_id);
    printf("Name: %s\n", customer.name);
    printf("Address: %s\n", customer.address);
    printf("Phone Number: %s\n", customer.phone_number);
    printf("Date of Birth: %s\n", customer.dob);

    return 0;
}

// The output of the above program is shown as below

/*
Customer Information:
Customer ID: 201
Name: Rajest Bendre
Address: 123 Main Street, Pune
Phone Number: +1234567890
Date of Birth: 1990-05-15
*/