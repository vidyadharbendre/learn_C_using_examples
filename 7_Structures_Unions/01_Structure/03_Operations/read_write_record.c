#include <stdio.h>

// Definition of the Student structure
struct StudentRecord {
    int roll_no;      // Student Roll Number
    char name[50];     // Student Name
    float fees;        // Student Fees
};

int main() {
    // Creating an instance of the StudentRecord structure
    struct StudentRecord student;

    // Reading data from the keyboard
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Fees: ");
    scanf("%f", &student.fees);

    // Displaying information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Fees: %.2f\n", student.fees);

    return 0;
}
// The output of the above program is shown as below

/*
Enter Roll Number: 1234
Enter Name: Vidyadhar
Enter Fees: 456

Student Information:
Roll Number: 1234
Name: Vidyadhar
Fees: 456.00
*/