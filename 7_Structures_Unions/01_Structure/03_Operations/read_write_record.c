#include <stdio.h>

/* 
Purpose:
This program demonstrates how to create and use a structure in C to store student information. The program allows the user to input student data (roll number, name, and fees), stores the data in a structure, and then displays the entered data. It provides a simple example of structure usage and basic input/output in C.
*/

// Definition of the Student structure
struct StudentRecord {
    int roll_no;      // Student Roll Number
    char name[50];    // Student Name (Fixed-size character array)
    float fees;       // Student Fees
};

int main() {
    // Creating an instance of the StudentRecord structure
    struct StudentRecord student;

    // Reading data from the keyboard
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);  // Read the student's roll number

    printf("Enter Name: ");
    scanf("%s", student.name);  // Read the student's name (use %s for strings)

    printf("Enter Fees: ");
    scanf("%f", &student.fees);  // Read the student's fees

    // Displaying the information entered by the user
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);  // Print the student's roll number
    printf("Name: %s\n", student.name);            // Print the student's name
    printf("Fees: %.2f\n", student.fees);         // Print the student's fees (formatted to two decimal places)

    return 0;
}

// The output of the above program is shown as below
/*
Enter Roll Number: 1234
Enter Name: Vidyadhar
Enter Fees: 4500

Student Information:
Roll Number: 1234
Name: Vidyadhar
Fees: 4500.00
*/
