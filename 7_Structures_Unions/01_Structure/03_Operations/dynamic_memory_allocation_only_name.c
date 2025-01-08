#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free

/* -----------------------------------------------------------------
   Purpose and Explanation of the Program:

   This program demonstrates the use of **dynamic memory allocation** in C 
   using `malloc` to allocate memory for a structure at runtime. It also 
   highlights the following concepts:
   1. **Memory allocation using malloc**: Allocating memory dynamically for a structure.
   2. **Structure usage**: Storing multiple data elements in a single variable.
   3. **Pointer to structure**: Accessing structure members through a pointer.
   4. **Freeing allocated memory**: Deallocating memory once it is no longer needed.

   **Program Breakdown:**
   - A structure `StudentRecord` is defined with three members:
     - `roll_no` (integer): A student's roll number.
     - `name` (character array of size 50): A student's name.
     - `fees` (float): A student's fees.
   - Memory is dynamically allocated for a single `StudentRecord` using `malloc`.
   - The program checks whether memory allocation was successful by verifying if the pointer is `NULL`.
   - Data is then input from the user via `scanf` and assigned to the members of the structure.
   - The program displays the student's information.
   - Finally, the dynamically allocated memory is freed using `free` to avoid memory leaks.

   **Key Concepts:**
   - **Dynamic Memory Allocation**: `malloc` is used to allocate memory during runtime instead of at compile-time.
   - **Structure and Pointers**: Structures allow you to group different types of data, and pointers provide a way to access those grouped data elements.
   - **Freeing Memory**: It's essential to release memory allocated dynamically using `malloc` when it's no longer needed to prevent memory leaks.

   This program is useful for understanding memory management, structure usage, and efficient memory allocation in C.
----------------------------------------------------------------- */

// Definition of the StudentRecord structure
struct StudentRecord {
    int roll_no;      // Student Roll Number
    char name[50];    // Student Name (character array with a max size of 50)
    float fees;       // Student Fees (floating-point number)
};

int main() {
    // Dynamically allocate memory for a StudentRecord structure using malloc
    struct StudentRecord *student = (struct StudentRecord *)malloc(sizeof(struct StudentRecord));

    // Check if memory allocation was successful
    if (student == NULL) {
        // If malloc returns NULL, memory allocation failed
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Reading data for the StudentRecord structure from the user

    printf("Enter Roll Number: ");
    // Use scanf to accept an integer value for the roll number and store it in the dynamically allocated structure
    scanf("%d", &student->roll_no); // Use the arrow operator (->) because we are working with a pointer

    printf("Enter Name: ");
    // Use scanf to accept a string (name) for the student and store it in the dynamically allocated structure
    scanf("%s", student->name);

    printf("Enter Fees: ");
    // Use scanf to accept a floating-point value for the fees and store it in the dynamically allocated structure
    scanf("%f", &student->fees);

    // Displaying the student information stored in the dynamically allocated memory
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->roll_no);  // Access structure members using the pointer
    printf("Name: %s\n", student->name);  // Access structure members using the pointer
    printf("Fees: %.2f\n", student->fees);  // Access structure members using the pointer

    // Free the dynamically allocated memory to prevent memory leaks
    free(student);

    return 0; // Return 0 to indicate successful execution
}

/* The output of the above program is shown as below:

Enter Roll Number: 1
Enter Name: Vidyadhar
Enter Fees: 4500

Student Information:
Roll Number: 1
Name: Vidyadhar
Fees: 4500.00

Explanation of Output:
1. The program prompts the user to enter the roll number, name, and fees for the student.
2. After receiving the inputs, it prints the entered data as student information.
3. The program successfully frees the memory allocated dynamically to avoid memory leaks.
*/
