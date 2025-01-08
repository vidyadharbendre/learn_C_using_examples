#include <stdio.h>

/* -----------------------------------------------------------------
   Purpose and Explanation of the Program:
   
   This program demonstrates the use of **structures** in C to represent 
   real-world entities with multiple attributes. In this case, we define 
   a structure named `Customer` to store information about a customer.
   
   **Structure Overview:**
     A structure allows us to group different types of data together into one 
     unit. In this case, we are grouping customer-related information such as:
     - Customer ID (integer type)
     - Customer Name (string type)
     - Customer Address (string type)
     - Customer Phone Number (string type)
     - Customer Date of Birth (string type)
   
   The program initializes an instance of the structure and assigns values 
   directly to its members. It then prints the values to demonstrate how 
   structures work.
   
   **Steps:**
   1. The `Customer` structure is defined with five attributes.
   2. A variable `customer` is created, and values are directly assigned to 
      the structure members using the initialization list.
   3. The program displays the values stored in the `customer` structure.
   
   This program is an example of how to use structures for organizing and 
   managing related data, making the code easier to maintain and understand.
----------------------------------------------------------------- */

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
