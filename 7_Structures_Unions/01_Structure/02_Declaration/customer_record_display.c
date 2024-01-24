#include <stdio.h>
#include <string.h>

// Definition of the Customer structure
struct Customer {
    int cust_id;           // Customer ID
    char name[50];         // Customer Name
    char address[100];     // Customer Address
    char phone_number[15]; // Customer Phone Number
    char dob[12];          // Customer Date of Birth
};

int main() {
    // Creating an instance of the Customer structure
    struct Customer customer;

    // Assigning values to attributes
    customer.cust_id = 201;
    strcpy(customer.name, "Atharva Bendre");
    strcpy(customer.address, "123 Main Street, Cityville");
    strcpy(customer.phone_number, "+1234567890");
    strcpy(customer.dob, "1990-05-15");

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
Name: Atharva Bendre
Address: 123 Main Street, Cityville
Phone Number: +1234567890
Date of Birth: 1990-05-15
*/