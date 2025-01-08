#include <stdio.h>
#include <stdlib.h>  // Required for malloc and free
#include <string.h>  // Required for strcpy

/* 
Purpose:
This program demonstrates how to use structures, dynamic memory allocation, and pointers in C.
The goal of the program is to allow the user to input and store multiple student records in a 
dynamically allocated array of structures, and then display the stored information.

Detailed Steps:
1. A structure `StudentRecord` is defined to hold student data:
   - `roll_no` (integer) stores the student's roll number.
   - `name` (string) stores the student's name.
   - `fees` (floating-point number) stores the student's fees.
   
2. The user is prompted to enter the number of student records they want to input.

3. Dynamic memory is allocated using `malloc` for storing `n` student records, where `n` is provided by the user.

4. The program takes input for each student's roll number, name, and fees.

5. Once all the details are entered, the program prints the information of each student.

6. The dynamically allocated memory is freed using `free` after it is no longer needed.

The program shows how to manage memory dynamically using pointers and the `malloc` function in C.
*/

// Definition of the StudentRecord structure
struct StudentRecord {
    int roll_no;       // Student Roll Number
    char name[50];     // Student Name (fixed-size array)
    float fees;        // Student Fees
};

int main() {
    int n, i;

    /* 
    Step 1: Get the number of student records from the user.
    The user inputs how many student records they want to manage.
    */
    printf("Enter the number of student records: ");
    scanf("%d", &n);

    /* 
    Step 2: Dynamically allocate memory for n student records.
    The malloc function is used to allocate memory to store `n` instances of `StudentRecord`.
    If memory allocation fails, an error message is displayed, and the program exits.
    */
    struct StudentRecord *ptr_to_struct_records;  // Declare the pointer
    ptr_to_struct_records = (struct StudentRecord *)malloc(n * sizeof(struct StudentRecord));  // Allocate memory


    if (ptr_to_struct_records == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;  // Exit if memory allocation fails
    }

    /* 
    Step 3: Input student details.
    A loop is used to iterate through each student record and take the following details:
    - Roll number (integer)
    - Name (string)
    - Fees (floating-point number)
    The `scanf` function is used to take input from the user and store it in the dynamically allocated memory.
    */
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &ptr_to_struct_records[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", ptr_to_struct_records[i].name);  // Assumes the name is a single word without spaces

        printf("Enter Fees: ");
        scanf("%f", &ptr_to_struct_records[i].fees);
    }

    /* 
    Step 4: Display student information.
    After collecting the data, the program displays the details of each student stored in the dynamically allocated array.
    */
    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printf("Roll Number: %d\n", ptr_to_struct_records[i].roll_no);
        printf("Name: %s\n", ptr_to_struct_records[i].name);
        printf("Fees: %.2f\n\n", ptr_to_struct_records[i].fees);
    }

    /* 
    Step 5: Free the dynamically allocated memory.
    Once the information is displayed, the program frees the allocated memory using the `free` function 
    to avoid memory leaks.
    */
    free(ptr_to_struct_records);

    return 0; // End the program
}

// The output of the above program is shown as below
/*
Enter the number of student records: 2

Enter details for student 1:
Enter Roll Number: 1
Enter Name: Vidyadhar
Enter Fees: 4500

Enter details for student 2:
Enter Roll Number: 2
Enter Name: Poornima
Enter Fees: 4500

Student Information:
Record 1:
Roll Number: 1
Name: Vidyadhar
Fees: 4500.00

Record 2:
Roll Number: 2
Name: Poornima
Fees: 4500.00
*/
