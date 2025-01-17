#include <stdio.h>
#include <string.h> // Required for strcpy

/* 
Purpose:
This program defines a structure 'StudentRecord' to store information about a student:
- Roll Number (integer)
- Name (string)
- Fees (floating-point number)

The program creates two instances of the 'StudentRecord' structure, initializes them with values
(either directly or by setting each field individually), and then displays the details of the
two students.

The program demonstrates how to use structures, how to initialize them, and how to use
functions like 'strcpy' to copy strings into character arrays.
*/

// Definition of the StudentRecord structure
struct StudentRecord {
    int roll_no;       // Student Roll Number
    char name[50];     // Student Name (fixed-size array)
    float fees;        // Student Fees
};

int main() {
    // Declare two separate instances of the StudentRecord structure
    struct StudentRecord s1, s2;

    // Initialize the first student's details
    s1.roll_no = 1234;
    strcpy(s1.name, "Vidyadhar"); // Copy name using strcpy
    s1.fees = 456.78;

    // Initialize the second student's details
    s2.roll_no = 1235;
    strcpy(s2.name, "Poornima");   // Copy name using strcpy
    s2.fees = 556.78;

    // Display student information
    printf("\nStudent Information:\n");

    // Display the first student's details
    printf("Record 1:\n");
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Fees: %.2f\n\n", s1.fees);

    // Display the second student's details
    printf("Record 2:\n");
    printf("Roll Number: %d\n", s2.roll_no);
    printf("Name: %s\n", s2.name);
    printf("Fees: %.2f\n", s2.fees);

    return 0;
}

// The output of the above program is shown as below
/*
Student Information:
Record 1:
Roll Number: 1234
Name: Vidyadhar
Fees: 456.78

Record 2:
Roll Number: 1235
Name: Poornima
Fees: 556.78
*/
