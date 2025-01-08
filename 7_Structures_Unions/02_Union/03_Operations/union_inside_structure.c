/*
Core Difference between Structure and Union:

1. **Memory Allocation:**
   - **Structure:** Each member of a structure has its own memory allocation. The total size of the structure is the sum of the sizes of all its members.
   - **Union:** All members of a union share the same memory location. The size of a union is the size of its largest member. 

2. **Storage:**
   - **Structure:** A structure can store multiple values simultaneously, as each member has its own memory space.
   - **Union:** A union can only store one value at a time. When you assign a value to one member, the value of other members is overwritten (since they share the same memory space).

3. **Use Cases:**
   - **Structure:** Useful when you need to store multiple variables of different types at the same time.
   - **Union:** Useful when you need to store one of several possible values, but only one at a time, to save memory.

Example: In the union `ContactInfo`, only the phone number or the email can be stored at any given time. The size of the union is determined by the larger of the two members (email in this case).

*/

#include <stdio.h>
#include <string.h>

// Define a union for different types of contact information
// A union allows only one member to hold a value at any time, and all members share the same memory location.
union ContactInfo {
    char phone[10];  // Can store a phone number as a string of 10 characters.
    char email[50];  // Can store an email address as a string of up to 50 characters.
};

// Define a structure for a person with a union for contact information
// A structure can hold multiple members, and each member has its own memory space.
struct Person {
    char name[50];   // Name of the person
    int age;         // Age of the person
    union ContactInfo contact;  // Union that holds either phone number or email
};

int main() {
    // Declare and initialize a person
    struct Person person1 = {"Vidyadhar Bendre", 52, {"1234567890"}};  // Initialize with phone number

    // Access and print information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    // Access phone number from the union (currently holding the phone number)
    printf("Phone: %s\n", person1.contact.phone);

    // Modify email in the union
    strcpy(person1.contact.email, "vidyadhar.bendre@email.com");

    // Access email from the union (now holding the email, phone number will be overwritten)
    printf("Email: %s\n", person1.contact.email);

    return 0;
}

// The output of the above program is shown as below
/*
Name: Vidyadhar Bendre
Age: 52
Phone: 1234567890
Email: vidyadhar.bendre@email.com
*/