#include <stdio.h>
#include <string.h>

// Define a union for different types of contact information
union ContactInfo {
    char phone[10];
    char email[50];
};

// Define a structure for a person with a union for contact information
struct Person {
    char name[50];
    int age;
    union ContactInfo contact;
};

int main() {
    // Declare and initialize a person
    struct Person person1 = {"Vidyadhar Bendre", 52, {"1234567890"}};

    // Access and print information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    // Access phone number from the union
    printf("Phone: %s\n", person1.contact.phone);

    // Modify email in the union
    strcpy(person1.contact.email, "vidyadhar.bendre@email.com");

    // Access email from the union
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