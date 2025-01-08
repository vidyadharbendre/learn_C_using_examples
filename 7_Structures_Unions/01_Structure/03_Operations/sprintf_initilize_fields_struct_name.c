#include <stdio.h>
#include <stdlib.h>  // For memory allocation functions

/* 
Purpose:
This program demonstrates dynamic memory allocation in C using the `malloc` function. It defines a structure `StudentRecord`, which contains a roll number, name (as a dynamically allocated string), and fees for a student. The program shows how to allocate memory for a string field dynamically, initialize the fields, and display the student information. It also demonstrates proper memory management by freeing the dynamically allocated memory at the end.

Detailed Steps:
1. A structure `StudentRecord` is defined to store the following data for a student:
   - `roll_no`: The student's roll number (integer).
   - `name`: A pointer to a character array, which will hold the student's name dynamically.
   - `fees`: The student's fees (floating-point number).

2. The program declares a variable `student` of type `StudentRecord`.

3. The program uses `malloc` to allocate memory for the `name` field of the structure. This allows us to dynamically store the student's name without knowing the exact length in advance.

4. After memory allocation, the program initializes the fields: 
   - The roll number and fees are directly assigned.
   - The name is assigned using the `sprintf` function, which formats the string into the `name` field.

5. After storing the data, the program displays the student information (roll number, name, and fees).

6. The program uses `free` to deallocate the memory allocated for the student's name before the program terminates, demonstrating proper memory management.

This program highlights the use of dynamic memory allocation, initialization, and memory deallocation in C.
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

    /* 
    Step 1: Allocate memory dynamically for the 'name' field.
    The program uses malloc to allocate memory for the 'name' field, which is a character pointer.
    This memory can store up to 50 characters (including the null-terminator).
    */
    student.name = (char *)malloc(50 * sizeof(char));  // Allocate memory for the name
    if (student.name == NULL) {
        printf("Memory allocation for name failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    /* 
    Step 2: Initialize fields.
    The roll number and fees are assigned directly.
    The student's name is assigned using the sprintf function.
    */
    student.roll_no = 1234;
    student.fees = 456.78;
    // Use sprintf to assign a string to name
    sprintf(student.name, "Vidyadhar");

    /* 
    Step 3: Display student information.
    The program prints the student's roll number, name, and fees to the console.
    */
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Fees: %.2f\n", student.fees);

    /* 
    Step 4: Free allocated memory.
    It is important to free the dynamically allocated memory to prevent memory leaks.
    */
    free(student.name);

    return 0;  // End of the program
}

// The output of the above program is shown as below
/*
Student Information:
Roll Number: 1234
Name: Vidyadhar
Fees: 456.78
*/
