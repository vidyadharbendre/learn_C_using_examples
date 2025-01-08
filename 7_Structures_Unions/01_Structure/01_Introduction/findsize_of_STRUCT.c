#include <stdio.h>

/* -----------------------------------------------------------------
   Purpose and Explanation of the Program:

   This program demonstrates the use of **structures** in C, **pointers**, and 
   **memory addressing**. Specifically, it highlights how to:
   1. Define a structure with multiple members.
   2. Create an array of structures.
   3. Use pointers to refer to structure elements and access their memory addresses.
   4. Use the `sizeof()` operator to find the size of a structure and an array of structures.

   **Program Breakdown:**
   - A structure `StudentRecord` is defined with two members:
     - `roll_no` (integer): A student's roll number.
     - `marks` (float): A student's marks.
   - An array `s` of `StudentRecord` structures is created to store the data for 5 students.
   - A pointer `ptrtostruct` is declared and initialized to point to the first element of the `s` array.
   - The `sizeof()` operator is used to calculate the size of a single structure and the entire array of structures.
   - The memory address of the first element of the array is printed using the pointer.

   This program is useful for understanding:
   - How structures are defined and used.
   - How to work with arrays of structures.
   - How to use pointers to access structure elements and print their memory addresses.
   - Understanding the sizes of structures and arrays in memory.

   **Key Concepts:**
   - Structures are used to group related data together.
   - Pointers can be used to refer to structures, allowing access to the structure's members.
   - The `sizeof()` operator provides the size of a structure or array in memory.
   - Memory addresses can be printed using pointers.
----------------------------------------------------------------- */

int main() {
    // Definition of the structure StudentRecord
    struct StudentRecord {
        int roll_no;  // Student's Roll Number
        float marks;  // Student's Marks
    };

    // Array of StudentRecord to store details of 5 students
    struct StudentRecord s[5];

    // Pointer to a structure of type StudentRecord
    struct StudentRecord *ptrtostruct;  // pointer declaration

    // The pointer ptrtostruct is assigned the address of the first element of the array s
    ptrtostruct = &s[0];  // Point to the first element of the array
    // Now ptrtostruct points to the first structure in the array s.

    // Displaying the size of the structure StudentRecord
    printf("The size of the StudentRecord: %lu\n", sizeof(s[0]));
    // The size of a single structure StudentRecord is printed.

    // Displaying the size of the array of structures
    printf("The size of the StudentRecord array: %lu\n", sizeof(s));
    // The size of the array s (which consists of 5 StudentRecord structures) is printed.

    // Printing the address of the first element of the array
    printf("The address of the StudentRecord 1: %p\n", (void *)ptrtostruct);
    // The memory address of the first element of the array s (where ptrtostruct is pointing) is printed.
    // The (void *) typecast is used to avoid compiler warnings.

    return 0;
}

/* The output of the above program is shown as below:

The size of the StudentRecord: 8
The size of the StudentRecord array: 40
The address of the StudentRecord 1: 0x16d8ca210

Explanation of Output:
1. The size of a single structure `StudentRecord` is typically 8 bytes, as it contains an `int` (4 bytes) and a `float` (4 bytes).
2. The size of the array of 5 `StudentRecord` structures is 40 bytes (5 structures × 8 bytes).
3. The address printed corresponds to the memory location of the first element in the array `s`, as the pointer `ptrtostruct` is pointing to the first structure.
*/
