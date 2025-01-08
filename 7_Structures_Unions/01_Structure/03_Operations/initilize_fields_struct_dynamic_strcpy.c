#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Required for strcpy

/*
Purpose:
This program demonstrates dynamic memory allocation for a structure in C. 
It uses `malloc` to allocate memory for a character array (used as the student's name) inside the structure.
The program initializes the structure fields, displays student information, and properly frees the allocated memory at the end to avoid memory leaks.

Explanation:
1. We define a structure `StudentRecord` with three members:
   - `roll_no`: An integer to store the student's roll number.
   - `name`: A pointer to a character array (string) to store the student's name.
   - `fees`: A floating-point value to store the student's fees.
   
2. The program allocates memory dynamically for the `name` field of the structure using `malloc`.
   - We allocate space for 50 characters to store the student's name.
   
3. We initialize the fields of the structure:
   - Assign a roll number (`1234`).
   - Assign a fee value (`456.78`).
   - Use `strcpy` to copy the name `"Vidyadhar"` into the `name` field.
   
4. The program then displays the student's information using `printf`:
   - Roll number, name, and fees are printed on the screen.
   
5. Finally, we free the dynamically allocated memory for the `name` field to prevent memory leaks.

*/

// Definition of the Student structure
struct StudentRecord {
    int roll_no;       // Student Roll Number
    char *name;        // Pointer to hold Student Name
    float fees;        // Student Fees
};

int main() {
    // Declare structure as a normal variable (not a pointer)
    struct StudentRecord student;

    // Allocate memory for the name field using malloc
    student.name = (char *)malloc(50 * sizeof(char)); // Allocate memory for name field
    if (student.name == NULL) {
        // If malloc returns NULL, it indicates memory allocation failed
        printf("Memory allocation for name failed!\n");
        return 1; // Return with error code
    }

    // Initialize fields
    student.roll_no = 1234; // Assign a roll number to the student
    student.fees = 456.78;  // Assign fees to the student

    // Use strcpy to copy a string ("Vidyadhar") to the name field
    strcpy(student.name, "Vidyadhar");

    // Display student information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);  // Access and display roll number
    printf("Name: %s\n", student.name);            // Access and display student name
    printf("Fees: %.2f\n", student.fees);          // Access and display fees

    // Free memory allocated for the name field
    free(student.name);

    return 0; // Return 0 to indicate successful execution
}

// The output of the above program is shown as below
/*
Student Information:
Roll Number: 1234
Name: Vidyadhar
Fees: 456.78
*/