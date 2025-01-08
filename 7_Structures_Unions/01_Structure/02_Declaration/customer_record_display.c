#include <stdio.h>
#include <string.h>

/* -----------------------------------------------------------------
   Structure Declaration and Usage Explanation:
   
   A **structure** is a user-defined data type in C that allows us to 
   group different data types under one name, and it is commonly used 
   to represent real-world entities like employees, customers, students, etc.
   
   **Syntax for Declaring a Structure:**
     struct StructureName {
         data_type member1;
         data_type member2;
         data_type member3;
         ... // More members can be added as per requirement
     };
   
   Example Structure Declaration:
   
     struct Customer {
         int cust_id;          // Customer ID (integer type)
         char name[50];        // Customer Name (string type)
         char address[100];    // Customer Address (string type)
         char phone_number[15];// Customer Phone Number (string type)
         char dob[12];         // Customer Date of Birth (string type)
     };
   
   Each member of the structure can have different data types, and it allows
   combining various attributes of an entity in one cohesive unit. Structures 
   can also be used to represent more complex data like arrays, pointers, and 
   other structures.
   
   **Accessing Structure Members:**
   To access structure members, we use the dot operator (`.`) with the structure 
   variable. For example:
     structure_variable.member_name;
   
   If working with pointers to structures, the arrow operator (`->`) is used.
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
    // Creating an instance of the Customer structure
    struct Customer customer;

    // Assigning values to attributes
    customer.cust_id = 201;
    strcpy(customer.name, "Vidyadhar Bendre");
    strcpy(customer.address, "Dhammanagi Sumo Leaves");
    strcpy(customer.phone_number, "+123456789");
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

// The output of the above program is shown as below:
/*
Customer Information:
Customer ID: 201
Name: Vidyadhar Bendre
Address: Dhammanagi Sumo Leaves
Phone Number: +123456789
Date of Birth: 1990-05-15
*/
