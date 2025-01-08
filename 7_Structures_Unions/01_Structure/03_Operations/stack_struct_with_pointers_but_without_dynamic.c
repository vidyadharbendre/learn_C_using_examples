#include <stdio.h>
#include <string.h>  // For strcpy

/* 
Purpose:
This program demonstrates how to use structures and arrays of structures in C. It allows the user to input and store multiple student records in an array of structures and then display the information of all students.
The program showcases how to use pointers to access the elements of an array of structures and take input for each record.

Detailed Steps:
1. A structure `StudentRecord` is defined to store the following data for a student:
   - `roll_no`: The student's roll number (integer).
   - `name`: The student's name (string).
   - `fees`: The student's fees (floating-point number).

2. The user is prompted to input the number of student records they want to manage.

3. The program declares an array of `StudentRecord` structures with a size of `n`, where `n` is provided by the user.

4. A pointer to the array of structures is then initialized.

5. The program uses a loop to input the details for each student (roll number, name, and fees) and stores the data in the array.

6. After all details are entered, the program displays the information of each student.

This program shows how to declare an array of structures and use pointers to access and modify data within it. It also demonstrates the usage of basic structure elements in C.
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
    The user inputs how many student records they want to store.
    */
    printf("Enter the number of student records: ");
    scanf("%d", &n);

    /* 
    Step 2: Declare an array of structures with size n.
    An array of `StudentRecord` structures is declared with size `n`, where `n` is the number of student records the user wants to input.
    */
    struct StudentRecord SR[n];

    /* 
    Step 3: Pointer to the array of structures.
    A pointer `ptr_to_struct_records` is initialized to point to the array of structures `SR`. 
    This pointer will be used to access and manipulate the student data in the array.
    */
    struct StudentRecord *ptr_to_struct_records = SR;

    /* 
    Step 4: Input student details.
    A loop is used to iterate through each student record. For each iteration:
    - The program prompts the user to input the student's roll number, name, and fees.
    - The user inputs these values, which are stored in the `StudentRecord` structure at the corresponding index in the array.
    */
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &ptr_to_struct_records[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", ptr_to_struct_records[i].name);

        printf("Enter Fees: ");
        scanf("%f", &ptr_to_struct_records[i].fees);
    }

    /* 
    Step 5: Display student information.
    After collecting the details, the program prints the information for each student in the array.
    It accesses each student record using the pointer and prints the roll number, name, and fees.
    */
    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printf("Roll Number: %d\n", ptr_to_struct_records[i].roll_no);
        printf("Name: %s\n", ptr_to_struct_records[i].name);
        printf("Fees: %.2f\n\n", ptr_to_struct_records[i].fees);
    }

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
