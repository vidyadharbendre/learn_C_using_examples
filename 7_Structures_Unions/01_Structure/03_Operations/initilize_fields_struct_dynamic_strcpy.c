#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Required for strcpy

// Definition of the Student structure
struct StudentRecord {
    int roll_no;       // Student Roll Number
    char *name;        // Pointer to hold Student Name
    float fees;        // Student Fees
};

int main() {
    // Declare structure as a normal variable (not a pointer)
    struct StudentRecord student;

    // Allocate memory for the name field
    student.name = (char *)malloc(50 * sizeof(char)); // Allocate memory for name
    if (student.name == NULL) {
        printf("Memory allocation for name failed!\n");
        return 1;
    }

    // Initialize fields
    student.roll_no = 1234;
    student.fees = 456.78;
    // Use strcpy to copy a string to name
    strcpy(student.name, "Vidyadhar");

    // Display student information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Fees: %.2f\n", student.fees);

    // Free memory allocated for name
    free(student.name);

    return 0;
}
// The output of the above program is shown as below:
/*
Student Information:
Roll Number: 1234
Name: Vidyadhar
Fees: 456.78
*/