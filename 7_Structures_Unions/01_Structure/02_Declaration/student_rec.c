#include <stdio.h>
#include <string.h>

// Definition of the StudentRecord structure
struct StudentRecord {
    int rollNumber;      // Student Roll Number
    char name[50];       // Student Name
    char gender;         // Student Gender (Assuming 'M' for Male, 'F' for Female)
    double fees;         // Student Fees
};

int main() {
    // Creating instances of StudentRecord
    struct StudentRecord student1, student2;

    // Assigning values to attributes for student1
    student1.rollNumber = 101;
    strcpy(student1.name, "Vidyadhar Bendre");
    student1.gender = 'M';
    student1.fees = 1500.0;

    // Assigning values to attributes for student2
    student2.rollNumber = 102;
    strcpy(student2.name, "Akshara Bendre");
    student2.gender = 'F';
    student2.fees = 1800.0;

    // Displaying information for student1
    printf("Student 1:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Gender: %c\n", student1.gender);
    printf("Fees: %.2f\n\n", student1.fees);

    // Displaying information for student2
    printf("Student 2:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Gender: %c\n", student2.gender);
    printf("Fees: %.2f\n", student2.fees);

    return 0;
}

// The output of the above program is shown as below
/*
Student 1:
Roll Number: 101
Name: Vidyadhar Bendre
Gender: M
Fees: 1500.00

Student 2:
Roll Number: 102
Name: Akshara Bendre
Gender: F
Fees: 1800.00
*/